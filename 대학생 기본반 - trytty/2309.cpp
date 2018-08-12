//일곱 난쟁이(실패)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int nan[9];
int real[7];
void gogo(int now,int total, int howmany){
	if (howmany>6) return;
	real[howmany]=nan[now];
	total+=nan[now];

	if(total==100 && howmany==6){
		for(int i=0;i<7;i++){
			cout<<real[i]<<endl;
		}
		return;
	}
	for(int i=now+1;now<9;i++){
		gogo(i,total,howmany+1);
	}
}

int main(){	
	for(int i =0;i<9;i++) cin>>nan[i];
	sort(nan,nan+9);
	gogo(0,0,0);

	return 0;
}
