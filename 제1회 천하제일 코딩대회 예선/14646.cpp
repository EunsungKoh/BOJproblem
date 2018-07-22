#include <iostream>
#include <cstdio>

using namespace std;
int maxNum=0;
int temp=0;
int current=0;
int menu=0;

bool check[100001];
int main() {

  scanf("%d" , &menu );

  for(int i =0;i<menu*2;i++){
    scanf("%d" , &temp );
    if(check[temp]){
      check[temp]=false;
      current--;
    }
    else{
      check[temp]=true;
      current++;
    }
    if(current>maxNum)
      maxNum=current;
  }
  printf("%d",maxNum);
  return 0;
}