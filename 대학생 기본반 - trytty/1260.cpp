//DFS와 BFS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool edge[1001][1001]={false};
bool visit[1001]={false};
int N,M,start,temp1,temp2;
void dfs(int now){
  visit[now]=true;
  printf("%d 번째 노드 방문\n",now+1);
  for(int i =0; i <N;i++){
    if(!visit[i]&&edge[now][i])
      dfs(i);
  }
}
int main (){
  cin >>N>>M>>start;
  for (int i=1;i<=M;i++){
    cin>>temp1>>temp2;
    edge[temp1][temp2]=true;
    edge[temp2][temp1]=true;
  }

  for (int i=0;i<N;i++){
    dfs(i);
  }

  return 0;
}