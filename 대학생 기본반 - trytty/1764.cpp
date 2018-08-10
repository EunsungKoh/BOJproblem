//듣보잡 (시간초과)
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int N,M,total=0;
vector < string > dd;
vector < string > bb;
string temp;
int main(){
	cin>>N>>M;
	dd.resize(N); 
	bb.resize(M);
	for(int i=0; i<N;i++){
		cin>>temp;
		dd[i]=temp;
	}
	for (int i=0;i<M;i++){
		cin>>temp;
		bb[i]=temp;
	}
	sort(dd.begin(),dd.end());
	
	for(int i=0; i<N;i++){
		if(count(bb.begin(),bb.end(),dd[i])) total++; 
	}

	cout<<total<<"\n";
	for(int i=0; i<N;i++){
		if(count(bb.begin(),bb.end(),dd[i]))
			cout<<dd[i]<<"\n";
	}
	return 0;
}
