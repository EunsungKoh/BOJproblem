//차이를 최대로 성공 (성공)
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N;
int big=0;
vector< int > v;
vector< int > v2;

void gogo(vector< int > v1){
  int total=0;
  for (int i = 0 ; i< v1.size()-1; i ++){
    total+=abs(v1[i+1]-v1[i]);
  }
  if (total>big) big = total;
  return ;
}
int main (){
  cin>>N;
  v.resize(N);
  v2.resize(v.size());
  for (auto it=v.begin(); it!=v.end(); it++){
    cin>>*it;
  }
  sort(v.begin(),v.end());
  do{
    gogo(v);
	}while(next_permutation(v.begin(),v.end()));
  cout <<big<<endl;
}