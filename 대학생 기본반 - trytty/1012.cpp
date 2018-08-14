#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
int T,M,N,K;
int temp1,temp2,bug=0;
bool baechoo[50][50]={false};
bool visited[50][50]={false};
vector < pair< int, int > >v;

void searching (int x,int y){
	visited[x][y]=true;
	if(x<M && baechoo[x+1][y] && !visited[x+1][y]) searching(x+1,y);
	if(x>0 && baechoo[x-1][y] && !visited[x-1][y]) searching(x-1,y);
	if(y<N && baechoo[x][y+1] && !visited[x][y+1]) searching(x,y+1);
	if(y>0 && baechoo[x][y-1] && !visited[x][y-1]) searching(x,y-1);
}

int main (){
  cin>>T;
  for (int testcase=0;testcase<T;testcase++){
	cin>>M>>N>>K;
    for (int i = 0; i<K;i++){
        cin>>temp1>>temp2;
	    baechoo[temp1][temp2]=true;
		v.push_back(make_pair(temp1,temp2));
    }
		
    for(auto it = v.begin();it!=v.end();it++){
        if(!visited[it->first][it->second]){
            bug++;
            searching(it->first,it->second);
        }
      }

    for (int i = 0; i<50;i++){
      for (int j = 0; j<50;j++){
				baechoo[i][j]=false;
				visited[i][j]=false;
      }
    }
		v.clear();
		cout<<bug<<endl;
		bug=0;
  }
	return 0;
}