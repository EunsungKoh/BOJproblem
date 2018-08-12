//일곱 난쟁이 - bruteforce (성공)
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
    temp=0;
    for(int i = 0; i <7; i ++){
      temp+=nj[i];
    }    
    if(temp == 100) break;
  }while (next_permutation(nj.begin(),nj.end()));
  sort(nj.begin(),nj.begin()+7);
  for(int i = 0;i <7; i++){
    cout<<nj[i]<<endl;
  }
  return 0;
}