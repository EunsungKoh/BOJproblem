#include <cstdio>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int N;
int total;
int small=2147483647;
vector< int > v1;
vector< int > v2;
int main (){
  scanf("%d",&N);
  v1.resize(N);
  v2.resize(N);
  for (int i =0; i<N;i++){
    scanf("%d",&v1.at(i));
  }
  for (int i =0; i<N;i++){
    scanf("%d",&v2[i]);
  }

  sort(v1.begin(),v1.end());
  sort(v2.begin(),v2.end(),greater<int>());
  total=0;
  for (int i =0; i<N;i++){
    total+= v1[i]*v2[i];
  }
  printf("%d\n",total);

  // do{
  //   total=0;
  //   for (int i =0; i<N;i++){
  //     total+= v1[i]*v2[i];
  //   }
  //   if (total<small) small =total;
  // }while (next_permutation(v1.begin(),v1.end()));
  
  // printf("%d\n",small);

  return 0;
}