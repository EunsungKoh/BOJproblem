#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N;
vector< int > v;
vector< int > v2;
int main (){
  cin>>N;
  v.resize(N);
  v2.resize(v.size());
  for (auto it=v.begin(); it!=v.end(); it++){
    cin>>*it;
  }
  v2=v;
  sort(v.begin(),v.end(),greater<int>());
  sort(v2.begin(),v2.end());
  for (auto it=v.begin(); it!=v.end(); it++){
    cout<<*it<<" ";
  }
  cout <<endl;
  for (auto it=v2.begin(); it!=v2.end(); it++){
    cout<<*it<<" ";
  }
  cout <<endl;


  do{

    for (int i = 0; i<v.size();i++){
      cout<<v.at(i)<<" ";
    }
  

		cout << '\n';

	}while(next_permutation(v.begin(),v.end()));
}