//스테판 쿼리	()
#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;
int N;
int a[301] = {0};
int b[301] = {0};
int maxWin=0;
bool Awin = false;
int main()
{
  cin >> N;
  for (int i = 1; i <= N; i++)
  {
    cin >> a[i];
  }
  for (int i = 1; i <= N; i++)
  {
    cin >> b[i];
  }
  for (int i = 1; i <= N; i++)
  {
    if (a[i] == 1 && b[i]==3)
    {
      Awin = true;
      a[0]++;
      b[0] = 0;
    }
    else if (a[i] == 3 && b[i]==1)
    {
      Awin = false;
      b[0]++;
      a[0] = 0;
    }
    else if (a[i] > b[i])
    {
      Awin = true;
      a[0]++;
      b[0] = 0;
    }
    else if (b[i] > a[i])
    {
      Awin = false;
      b[0]++;
      a[0] = 0;
    }

    else if (a[i] == b[i] && Awin)
    {
      a[0]=0;
      b[0]++;
      Awin =false;
    }
    else if (a[i] == b[i] && !Awin){
      a[0]++;
      b[0]=0;
      Awin = true;
    }

    if (maxWin<a[0])
      maxWin=a[0];
    else if (maxWin<b[0])
      maxWin=b[0]; 
      
  }
  cout<<maxWin;
}