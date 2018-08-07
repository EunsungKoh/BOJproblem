//욱제는 도박쟁이야!! (성공)
#include <cstdio>
int N,temp;
int total;
int main(){
  scanf("%d",&N);
  for(int i=0;i<2*N;i++){
    scanf("%d",&temp);
    if(temp>0)
      total+=temp;
    else
      total-=temp;
  }
  printf("%d",total);
}