#include<bits/stdc++.h>
using namespace std;
#define N 100000
int pri[30000];
int isp[N];
int cnt=0;

void getp(){
	for(int i=0;i<=N;++i){
		isp[i]=1;
	}
	cout<<cnt<<endl;
	isp[1]=0;
	for(int i=2;i<=N;++i){
		if(isp[i]){
			pri[cnt++]=i;
		}
		for(int o=1;o<cnt&&i*pri[o]<=N;++o){
			isp[i*pri[o]]=0;
			if(i%pri[o]==0) break;
		}
	}
}

int main(){
	getp();
	int n;
	cout<<cnt<<endl;
	for(int i=1;i<30;++i){
		cout<<i<<" "<<isp[i]<<endl;
	}
	while(cin>>n){
		cout<<isp[n]<<endl;
	}
	return 0;
}
