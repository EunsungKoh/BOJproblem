//걷다보니 신천역 삼 (Small)
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int check[1001];
vector<int> vc[1001];

int N,total=0, temp=0;
int numbers[10]={1,2,3,4,5};
int i,j,k;

void search (int level){
  
  if (level>1) {
    search(level -1);
    for(int i = level ; i<=N;i++){
      numbers[i]=0;
    }
  }
  // nubmers[N-level]

  printf("nubmers[N-%d] = %d\n" ,level,numbers[N-level]);

  return ;
}
int main() {
  scanf("%d" , &N );
  
  search(N);


  // printf("%d",total);
  return 0;
} 
