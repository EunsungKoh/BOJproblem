//더하기 사이클 (성공)
#include <cstdio>
int N, newone, temp, times=0;
void gogo (int obj){
  newone= obj/10 + obj%10;
  newone = obj%10*10 + newone%10;
  times++;
  if (newone==N) return;
  else gogo (newone);
}
int main (){
  scanf("%d",&N);
  gogo(N);
  printf("%d",times);
}