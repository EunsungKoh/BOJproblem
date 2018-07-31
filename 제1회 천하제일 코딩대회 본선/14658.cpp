//하늘에서 별똥별이 빗발친다 (시간초과)
#include <cstdio>
#include <iostream>
#include <vector>
#include <utility>
#include <map>

using namespace std;
int N,M,L,K;
int tempX,tempY,now;
int big=0;

vector< pair<int,int> > star;
map < pair<int, int> , int> total;

int main(){
  scanf("%d %d %d %d",&N,&M,&L,&K);
  star.resize(K);
  for (auto it=star.begin(); it!= star.end();it++){
    scanf("%d %d",&tempX,&tempY);
    *it=(make_pair(tempX,tempY));

    for(int i = tempX-L;i<=tempX;i++){
      if (i<=0) i=1;
      if (i>N) break;
      for (int j=tempY-L; j<=tempY;j++){
        if (j<=0) j=1;
        if (j>M) break;
        now= total.find(make_pair(i,j))->second+1;
        total[(make_pair(i,j))] = now;
        if (now>big) big = now;
      }
    }
  }
  printf("%d",K-big);
  return 0 ;
}
