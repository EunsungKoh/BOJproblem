//바이러스 (성공)
#include <iostream>

using namespace std;
bool edge[101][101]={false};
bool virus [101] = {false};
int N,M,total=0;
int temp1,temp2;
void dfs(int now){
  total+=1;
  virus[now]=true;
  cout<<now<<"번 컴퓨터 감염!"<<endl;
  for(int i=1;i<=N;i++){
    if(edge[now][i]&&!virus[i])
      dfs(i);
  }
}
int main(){
  cin>>N>>M;
  for (int i =1;i<=M;i++){
    cin>>temp1>>temp2;
    edge[temp1][temp2]=true;
    edge[temp2][temp1]=true;
  }
  dfs(1);
  cout<<"1번 컴퓨터를 제외하고, 총 "<<total-1<<"개의 컴퓨터 감염!"<<endl;
  return 0;
}