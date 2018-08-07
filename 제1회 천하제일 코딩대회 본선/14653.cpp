//너의 이름은
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;
int N,K,Q;
int j;
char who;

int person[27]={0};
// int unread[10001];
vector < int > v;
int main (){
  cin>>N>>K>>Q;
  v.resize(K+1);
  for(int i=1; i<=K; i++){
    // cin>>unread[i]>>who;
    cin>>v.at(i)>>who;
    person[(int)who-64]=i;
  }
  person[1]=K;
  // if(unread[Q]==0){
  if(v.at(Q)==0){
    cout<<-1;
    return 0;
  }
  
  for (int i = 1; i<=K; i++){
    j=i+1;
    // while(person[i]==unread[j]){
    while(j<=K&&person[i]==v.at(j)){
      person[i]=j;
      j++;
    }
  }

  for(int i=1; i<=N; i++){
    if(person[i]<Q){
      who=i+64;
      cout<<who<<" ";
    }
  }
  return 0;
}