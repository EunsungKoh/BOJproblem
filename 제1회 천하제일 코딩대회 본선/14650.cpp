//걷다보니 신천역 삼 (Small) (완성)
#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

int number;
int threshold;
int answer=0;
void search(int loc, int n, int total){
  if (loc==number) return ;
  if (loc ==number-1 && total>threshold && total%3==0){
    // cout << loc << ", "<< n<<" total ="<<total<<endl;
    answer++;
  }
  search(loc+1, 0, total*10+0);
  search(loc+1, 1, total*10+1);
  search(loc+1, 2, total*10+2);
}
int main (){
  cin>>number;
  threshold=pow(10,number-1);
  number++;
  search(0,0,0);
  cout<<answer;

}