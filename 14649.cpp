#include <iostream>
#include <cstdio>
using namespace std;
int P,N,i,j;
float R=0,G=0,B=0;
int bee[101];
char bee_dir[101];
int stone[101];
int main(){
  scanf("%d", &P);
  scanf("%d", &N);
  for( i = 1; i <= 100; i++)
  {
    stone[i]=0;
  }
  
  for( i = 1; i <= N; i++)
  {
    scanf("%d %c",&bee[i],&bee_dir[i]);
  }
  
  // printf("\n");
  for( i = 1; i <= N; i++)
  {
    // printf("%d ",bee[i]);
    // printf("%c\n",bee_dir[i]);
  }

  // printf("\n");
  for( i = 1; i <= N; i++)
  {
    if(bee_dir[i]=='L'){
      for(j = bee[i]-1 ; j >= 0; j--)
      {
        stone[j]+=1;
      }
    }
    else if(bee_dir[i]=='R'){
      for(j = bee[i]+1 ; j <= 100; j++)
      {
        stone[j]+=1;
      }
    }
  }

  // printf("\n");
  for( i = 1; i <= 100; i++)
  {
    if(stone[i]%3==0){
      B++;
    }
    else if(stone[i]%3==1){
      R++;
    }
    else if(stone[i]%3==2){
      G++;
    }
  }
  // printf("B:%d R:%d G:%d",B,R,G);
  printf("%.2f\n%.2f\n%.2f",(B/100)*P,(R/100)*P,(G/100)*P);

}
