//단지번호 붙이기 (틀림)
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
int N,danji=0;
bool apart[25][25]={false};
bool visit[25][25]={false};
int howmany[25]={0};
vector < pair < int,int > > v;
void gogo(int x,int y){
  visit[x][y]=true;
  howmany[danji]++;
  cout<<"("<<x<<","<<y<<")"<<endl;
  if (x<N&&!visit[x+1][y]&&apart[x+1][y]) gogo(x+1,y);
  if (x>0&&!visit[x-1][y]&&apart[x-1][y]) gogo(x-1,y);
  if (y<N&&!visit[x][y+1]&&apart[x][y+1]) gogo(x,y+1);
  if (y>0&&!visit[x][y-1]&&apart[x][y-1]) gogo(x,y-1);
}
int main (){
  scanf("%d",&N);
  for (int i=0;i<N;i++){
    for (int j=0;j<N;j++){
      scanf("%1d",&apart[i][j]);
      if(apart[i][j])
        v.push_back(make_pair(i,j));
    }
  }
  for( auto it = v.begin();it !=v.end(); it++){
    if(!visit[it->first][it->second]){
      cout<<"gogo start"<<endl;
      gogo(it->first,it->second);
      danji++;
    }
  }
  sort(howmany,howmany+danji);
  cout<< danji<<endl;
  for (int i=0;i<danji;i++){  
    cout<<howmany[i]<<endl;
  }
  return 0;
}