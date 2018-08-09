//ATM 실패 (시간 초과)
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int N;
int small=2147483647;
vector <int> v;
int waitTime[1001]={0};
void hap (vector <int> v1){
  int total;
  for (int i=0;i<N;i++){
    for(int j=i;j<N;j++){
      waitTime[j]+=v1[i];
    }
  }
  for (int i=0;i<N;i++){
    total+= waitTime[i];
  }
  if(total<small) {
    small= total;
    cout << "small이 바뀔때의 vector 원소 배열 :";
    for (int i=0;i<N;i++){
      cout << v1[i]<< " ";
    }
    cout <<endl;
    cout << "small이 바뀔때의 wait Time :";
    for (int i=0;i<N;i++){
      cout << waitTime[i]<< " ";
    }
    cout <<endl;
  }

}
int main (){
  cin >>N;
  v.resize(N);
  for (auto it =v.begin();it!=v.end();it++){
    cin >> *it;
  }
  sort(v.begin(),v.end());
  do{
    // for (int i=0;i<N;i++){
    //   cout<<v[i]<<" ";
    // }
    // cout << endl;
    hap (v);
  }while(next_permutation(v.begin(),v.end()));
  cout<<small;
  return 0;
}
