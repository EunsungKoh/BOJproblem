#include <iostream>
#include <cstdio>
using namespace std;

int bingo[501][501];
int number[501][501];

int i, j, m, n, temp, total, largest=0;
int main(){
  scanf("%d %d", &m,&n);
  // printf("%d,%d\n",m,n);
  
  for( i = 1; i <= m; i++)
  {
    for( j = 1; j <= n; j++)
    {
      scanf("%d",&bingo[i][j]);
      temp= bingo[i][j];
      while(temp>0){
        if (temp%10==9) {
          number[i][j]++;
        }
        temp/=10;
      }   
    }
  }
  
    // printf("\n");
  
  for( i = 1; i <= m; i++)
  {
    for( j = 1; j <= n; j++)
    {
      // printf("%d ",bingo[i][j]);
    }
    // printf("\n");
  }
  
    // printf("\n");
  
  for( i = 1; i <= m; i++)
  {
    temp=0;
    for( j = 1; j <= n; j++)
    {
      total+=number[i][j];
      temp+=number[i][j];
      // printf("%d ",number[i][j]);
    }
    
    if (temp>largest) {
      largest=temp;
    }
    
    // printf("\n");
  }

    // printf("\n");
  
  for( j = 1; j <= n; j++)
  {
    temp=0;
    for( i = 1; i <= m; i++)
    {
      temp+=number[i][j];
    }
    
    if (temp>largest) {
      largest=temp;
    }
    
  }
  
  // printf("%d-%d=%d", total,largest,total-largest);
  printf("%d",total-largest);
  
  
  
}