//DFS와 BFS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool edge[1001][1001]={false};
int N,M,start,temp1,temp2;
int main (){
  cin >>N>>M>>start;
  for (int i=1;i<=M;i++){
    cin>>temp1>>temp2;
    edge[temp1][temp2]=true;
    edge[temp2][temp1]=true;
  }
  for (int i=1;i<=M;i++){
    for (int j=1;j<=M;j++){
      if(edge[i][j]) printf("(%d,%d)\n",i,j);
    }
  }

  return 0;
}