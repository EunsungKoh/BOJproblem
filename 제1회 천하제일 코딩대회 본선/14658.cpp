//하늘에서 별똥별이 빗발친다
#include <cstdio>
#include <iostream>
#include <vector>
#include <utility>
#include <map>

using namespace std;
int N,M,L,K;
int tempX,tempY,now;
int blockStar;
int maxblock=0;
int big=0;

vector< pair<int,int> > star;
map < pair<int, int> , int> total;

int main(){
  scanf("%d %d %d %d",&N,&M,&L,&K);
  star.resize(K);

  // for(int i = tempX-L;i<=tempX+L;i++){
  // 	if (i<0) i=0;
  // 	for (int j=tempY-L; j<=tempY+L;j++){
  // 		if (j<0) j=0;
  // 		total[i].at(j)++;
  // 		if (total[i].at(j)>big) big = total[i].at(j);
  // 	}
  // }

  // cout<<endl;
  // if (total.find(make_pair(0,0)) == total.end())
  //   cout<<"0,0 없음"<<total.find(make_pair(0,0))->second<<endl;
  // else
  //   cout<<"0,0 존재"<<endl;

  // total.insert(make_pair(make_pair(0,0),3));
  // if (total.find(make_pair(0,0)) == total.end())
  //   cout<<"0,0 없음"<<endl;
  // else
  //   cout<<"0,0 존재: "<<total.find(make_pair(0,0))->second<<endl;

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
        cout<<"("<<i<<","<<j<<") = "<< now<<endl;
      }
    }

  }

  for(int i= 1; i<=N-L;i++){
    for (int j=1 ; j<=M-L ; j++){
      blockStar=0;
      for(auto it = star.begin(); it != star.end(); it++)
      {
        if ( i <= (it->first)&&
        (it->first)<=i+L && 
        (it->second)>=j && 
        (it->second)<=j+L ){
          blockStar++;
        }
      }
      if (blockStar>maxblock){
        maxblock=blockStar;
      }
    }
  }
  printf("Original : %d\n",K-maxblock);
  printf("Use Big : %d",K-big);
  
  
  return 0 ;

}
