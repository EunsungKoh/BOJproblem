#include <iostream>
using namespace std;
int N,M,total=0;
bool visit[1001]={false};
bool edge[1001][1001]={false};
int temp1,temp2;
void dfs(int now){
  visit[now]=true;
  cout<<now<<"번 노드 방문!"<<endl;
  for(int i=1;i<=N;i++){
    if(edge[now][i]&&!visit[i])
      dfs(i);
  }
}
int main (){
  cin>>N>>M;
  for(int i =1; i<=M; i++){
    cin>>temp1>>temp2;
    edge[temp1][temp2]=true;
    edge[temp2][temp1]=true;
  }
  for(int i=1; i<=N;i++){
    if(!visit[i]){
      cout<<i<<"번 노드에서 dfs 출발"<<endl;
      dfs(i);
      total++;
    }
  }
  cout<<"총 "<<total<<"개의 연결요소가 존재합니다."<<endl;
  return 0;
}