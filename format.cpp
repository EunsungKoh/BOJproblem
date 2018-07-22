#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
 
using namespace std;
 
int check[1001];
vector<int> vc[1001];
queue<int> q;
int V, E, start;
int from, to;
 
bool dfs(int &pos)
{
    printf("%d ", pos);
    check[pos] = 1;
    for (int i = 0; i < vc[pos].size(); i++)
    {
        int next = vc[pos][i];
 
        if (check[next] == 0 && !dfs(next))
            return false;
    }
    return true;
}
 
 
bool bfs(int &pos)
{
    while (!q.empty())
    {
        // 방문을 시작하는 정점을 확인
        int front = q.front();
        q.pop();
 
        if (check[front] == 0)
        {
            printf("%d ", front);
            check[front] = 1;
        }
 
        // 그 정점과 연결되어있는 정점을 확인
        for (int i = 0; i < vc[front].size(); i++)
        {
            if (check[vc[front][i]] == 0)
            {
                q.push(vc[front][i]);
                printf("%d ", vc[front][i]);
                check[vc[front][i]] = 1;
            }
        }
    }
 
    return true;
}
 
int main()
{
  
  scanf("%d%d%d", &V, &E, &start);

  // 무방향 그래프 형성
  for (int i = 0; i < E; i++)
  {
      scanf("%d%d", &from, &to);
      vc[from].push_back(to);
      vc[to].push_back(from);
  }

  // 내림차순 정렬
  for (int i = 0; i < V; i++)
      sort(vc[i].begin(), vc[i].end());


  // DFS start
  dfs(start);

  // 연결되어 있지 않은 그래프가 있을수도 있으니
  // 정점 모두를 탐색
  for (int j = 1; j <= V; j++)
  {
      if (check[j] == 0)
          dfs(j);
  }

  printf("\n");
  
  // 초기화
  fill(check, check + 1001, 0);

  // BFS start
  q.push(start);
  bfs(start);
  
  return 0;
}
