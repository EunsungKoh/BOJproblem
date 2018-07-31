//조교는 새디스트야!! (완료)
#include <cstdio>
#include <iostream>
 

using namespace std;

int N;
int temp;
int BBADDA=0;
int main (){
  cin>>N;
  
  for(int i = 1; i <= N; i++)
  {
    cin>>temp;
    if(temp!=i) BBADDA++;
  }
  
  cout<<BBADDA<<endl;
  return 0;
}