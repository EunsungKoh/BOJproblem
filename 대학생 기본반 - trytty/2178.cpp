//미로탐색 
#include <cstdio>
#include <iostream>
#define Maximum 2147483647
using namespace std;
bool maze[100][100]={false};
bool visit[100][100]={false};
int N,M,minimum=Maximum;
void gogo(int x, int y, int distance){
  printf("%d,%d에 왔다 여기까지의 거리는 %d\n",x,y,distance);
  visit[x][y]=true;
  if (distance>minimum) return;
  if ((x==N-1) && (y==M-1) ) {
    if (distance< minimum ) minimum=distance;
    return ;
  }
  if((x<N-1)&& maze[x+1][y]&&!visit[x+1][y]) gogo(x+1,y,distance+1);
  if((x>0)&& maze[x-1][y]&&!visit[x-1][y]) gogo(x-1,y,distance+1);
  if((y<M-1)&& maze[x][y+1]&&!visit[x][y+1]) gogo(x,y+1,distance+1);
  if((y>0)&& maze[x][y-1]&&!visit[x][y-1]) gogo(x,y-1,distance+1);
}
int main (){
  cin>>N>>M;
  for (int i=0;i<N;i++){
    for (int j=0;j<M;j++){
      scanf("%1d",&maze[i][j]);
    }
  }
  gogo(0,0,1);
  printf("%d\n",minimum);
}