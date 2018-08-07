//한조서열정리하고옴ㅋㅋ (성공)
#include <cstdio>
#include <iostream>

using namespace std;
int N, j,maxK=0;
int hanzo[30001];
int kill[30001]={0};
int main(){
  scanf("%d",&N);
  
  for(int i = 1; i <= N; i++)
  {
    scanf("%d",&hanzo[i]);
  }
  
  for(int i = 1; i < N; i++)
  {
    j=1;
    while(hanzo[i+j]<hanzo[i]){
      if (i+j>N) break;
      // printf("hanzo[%d] kills hanzo[%d]\n",i,i+j);
      kill[i]++;
      j++;
    }
  }

  // cout <<endl<< "==kills ==" <<endl;

  for(int i = 1; i <= N; i++)
  {
    // printf("%d ",kill[i]);
    if (kill[i]>maxK) maxK=kill[i];
  }

  printf("%d", maxK);
  return 0;
}
