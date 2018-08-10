//암호 만들기 (실패)
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int L,C;
vector < char > v;

int main(){
  scanf ("%d %d",&L,&C);
  v.resize(C);
  for (int it=0;it<C;it++){
    scanf(" %c",&v[it]);
  }
  sort(v.begin(),v.end());
  do{
    bool vowel=false;
    bool consonant =false;
    bool consonant2 =false;
    for (int it=0;it<L;it++){
      if (v[it]=='a' ||v[it]=='e' ||v[it]=='i' ||v[it]=='o' ||v[it]=='u')
        vowel=true;
        
      else if (!consonant){
        consonant= true;
      }
      else 
        consonant2=true;
    }
    if (vowel&&consonant&&consonant2){
      for (int it=0;it<L;it++){
        printf("%c",v[it]);
      }
      printf("\n");
    }
  }while(next_permutation(v.begin(),v.end()));

  return 0;
}