#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
int N,M;
int temp1,temp2;
vector < pair<int, int> > edge;
vector < vector <int> > node;
int main(){
  cin>>N>>M;
  node.resize(N+1);
  edge.resize(M);
  for(int i=0; i<=N;i++) 
    node[i].resize(0);
  for(int i=0; i<M;i++){
    cin>>temp1>>temp2;
    edge[i]=make_pair(temp1,temp2);
    node[temp1].resize(node[temp1].size()+1);
    node[temp1].push_back(temp2);
  }

  for(int i=1; i<=N;i++) 
    sort(node[i].begin(),node[i].end());

  for(int i=0; i<M;i++){
    cout<<"("<<edge[i].first<<", "<<edge[i].second<<")"<<endl;
  }

  for(int i=1; i<=N;i++){
    cout<<i<<"번째 노드에서 출발하는 엣지 갯수 = "<<(int)(node[i].size())-1<<endl;
  }
  return 0;
}