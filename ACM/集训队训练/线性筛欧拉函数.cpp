#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
#define N 1000000

int isp[N+10],pri[N],phi[N+10];
int cnt=0;

void getp(){
	for(int i=0;i<=N;++i){
		isp[i]=1;
	}
	phi[1]=phi[0]=0;
	isp[1]=isp[0]=0;
	for(int i=2;i<=N;++i){
		if(isp[i]){
		    pri[cnt++]=i;	
		    phi[i]=i-1;
		}
		for(int o=0;o<cnt&&pri[o]*i<=N;++o){
			isp[i*pri[o]]=0;
			phi[pri[o]*i]=phi[pri[o]]*phi[i];
			if(i%pri[o]==0){
				phi[pri[o]*i]=pri[o]*phi[i];
				break;
			}
		}
	}
}

long long sphi[N+10];

int main(){
	getp();
	ios::sync_with_stdio(0);
	int n;
	sphi[0]=0;
	for(int i=1;i<=N;++i){
		sphi[i]=sphi[i-1]+phi[i];
	}
	while(cin>>n){
		if(!n) break;
		cout<<sphi[n]<<endl;
	}
	return 0;
}
