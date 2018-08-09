//암호만들기
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;
int L,C;
char arr[15];
void backtracking(int pos, string str, int ja, int mo){
  if(str.size() == L){
    if(ja<2||mo<1){
      return ;
    }
    printf("%s\n", str.c_str());
  }
  
  for (int i = pos ; i<C; i++){
    if (arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
    backtracking(i+1,str+arr[i],ja,mo+1);
    else
    backtracking(i+1,str+arr[i],ja+1,mo);

  }
}
int main(){
  scanf("%d %d", &L,&C );
  for (int i=0;i<C;i++){
    scanf(" %c",&arr[i]);
  }
  sort (arr,arr+C);
  
  backtracking(0,"",0,0);
  return 0;
}