#include <iostream>
#include <cstdio>

using namespace std;
int m, n, i, j, temp=0, temp2=0;
int a, b, c, d;
int number[1001];
int result[10001];
int query[10001][5];
int main (){
  scanf("%d %d", &m,&n );
  
  for( i = 1; i <= m; i++)
  {
    scanf("%d",&number[i]);
  }

  for( i=1; i <= n; i++){
    scanf("%d",&temp);
    
    if (temp==1) {
      temp=0;
      scanf("%d",&a);
      scanf("%d",&b);
      for(j = a; j <= b; j++){
        temp+=number[j];
      }
      result[i]=temp;
      temp = number[a];
      number[a] = number[b];
      number[b] = temp;
    }
    
    else if (temp==2) {
      temp=0; temp2=0;
      scanf("%d",&a);
      scanf("%d",&b);
      scanf("%d",&c);
      scanf("%d",&d);
      for(j = a; j <= b; j++){
        temp+=number[j];
      }
      for(j = c; j <= d; j++){
        temp2+=number[j];
      }
      temp-=temp2;
      result[i]=temp;

    }
    
    
  }
  


  for( i = 1; i <= n; i++)
  {
    printf("%d\n",result[i]);
  }

}
