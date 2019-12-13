#include<bits/stdc++.h>
using namespace std;
#define N 150
int pri[30000];
int isp[13000];
int cnt=0;

void getp(){
	for(int i=0;i<N;++i){
		isp[i]=1;
	}
	isp[1]=0;
//	cout<<cnt<<"!"<<endl;
	for(int i=2;i<=N;++i){
		if(isp[i]){
		//	cout<<i<<endl;
			pri[cnt]=i;
			cnt++;
			for(int j=0;j<cnt;++j) cout<<pri[j]<<" ";cout<<"!"<<endl;
			for(int o=2;o*i<=N;++o){
				if(o*i<=N) isp[o*i]=0;
			}
		}
	}
	
	cout<<endl; 
	for(int i=0;i<cnt;++i) cout<<pri[i]<<" ";cout<<endl;
}

int main(){
	getp();
	int n;
	
	return 0;
}
