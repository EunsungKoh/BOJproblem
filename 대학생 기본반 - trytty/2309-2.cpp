//일곱 난쟁이 - bruteforce
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> nj;
int temp;
int main (){
  for(int i = 0;i <9; i++){
    cin >>temp;
    nj.push_back(temp);
  }

  do{    
    for(int i = 0; i <7; i ++){
      temp+=nj[i];
    }    
    if(temp == 100) break;
    else temp=0;
  }while (next_permutation(nj.begin(),nj.end()));
  sort(nj.begin(),nj.begin()+7);
  for(int i = 0;i <7; i++){
    cout<<nj[i]<<endl;
  }
  return 0;
}