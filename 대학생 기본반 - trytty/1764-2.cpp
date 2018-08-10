//듣보잡 (성공)
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int N,M,total=0;
vector < string > db;
vector < string > him;
string temp;
int main(){
	cin>>N>>M;
	for(int i=0; i<N+M;i++){
		cin>>temp;
    db.push_back(temp);
	}
	sort(db.begin(),db.end());
	for (auto it=db.begin();it!=db.end()-1;it++){
    if(*it==*(it+1)){
      him.push_back(*it);
      total++;
    }
	}
  cout<<total<<endl;
  for(auto it=him.begin();it!=him.end();it++)
    cout<<*it<<endl;
	return 0;
}
