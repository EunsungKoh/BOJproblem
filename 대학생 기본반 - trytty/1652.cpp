//누울 자리를 찾아라 (성공)
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int N,counter=0,ga=0,se=0;
char temp;
vector < vector < bool > > v;
int main() {
	cin>>N;
	v.resize(N);
	for (int i = 0; i<N;i++){
		v[i].resize(N);
	}
	for (int i = 0; i<N;i++){
		for(int j = 0;j<N;j++){
			cin>>temp;
			if(temp=='.'){
				v[i][j]=true;
			}
			else{
				v[i][j]=false;
			}
		}
	}
	
	for(int i = 0; i<N; i++){
		counter = 0;
		for (int j = 0 ;j < N;j++){
			if(v[i][j] == 1&&j<N-1)
				counter++;
			else if ((v[i][j]  ==0 && counter > 1) || (j ==N-1 && counter >= 1 && v[i][j] == 1) ){
				ga++;
				counter = 0;
			}
			else 
				counter=0;
			cout<<v[i][j];
		}
		cout<<"  ga = "<<ga<<"  counter= "<<counter<<endl;
	}
	cout<<endl<<endl;
	for(int i = 0; i<N; i++){
		counter = 0;
		for (int j= 0 ;j < N;j++){
			if(v[j][i] == 1 && j<N-1)
				counter++;
			else if ((v[j][i]  ==0 && counter > 1) || (j ==N-1 && counter >= 1 && v[j][i] == 1) ){
				se++;
				counter = 0;
			}
			else 
				counter=0;
			cout<<v[j][i];
		}
		cout<<"  se = "<<se<<"  counter= "<<counter<<endl;
	}
	
	cout<< ga<< " "<< se ;
	return 0;
}
