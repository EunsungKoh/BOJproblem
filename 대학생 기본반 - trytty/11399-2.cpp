//ATM 실패 (성공)
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int N;
vector <int> v;
int waitTime[1001]={0};

int main (){
  cin >>N;
  v.resize(N);
  for (auto it =v.begin();it!=v.end();it++){
    cin >> *it;
  }
  sort(v.begin(),v.end());

  int total=0;

  for (int i=0;i<N;i++){
    for(int j=i;j<N;j++){
      waitTime[j]+=v[i];
    }
  }
  for (int i=0;i<N;i++){
    total+= waitTime[i];
  }
  cout<<total;
  return 0;
}
