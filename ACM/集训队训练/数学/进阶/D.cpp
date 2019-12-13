#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
#define ll unsigned long long
#define N 450

int is[N]={0};
int prime[N];
int cnt=0;
int ans[N][N]={0};

void getp(){
	for(int i=2;i<450;++i) is[i]=1;
	for(int i=2;i*i<N;++i){
		if(is[i]){
		    for(int o=2*i;o<N;o+=i){
		    	is[o]=0;
			}
		}
	}
	for(int i=2;i<N;++i){
		if(is[i]){
			prime[cnt++]=i;
		}
	}
}

ll an[450][450]={0};

int main(){
	getp();
	for(int i=1;i<=433;++i){
		int cu=i;
		for(int o=0;prime[o]<=i;++o){
			if(cu<=1) break;
			while(cu%prime[o]==0){
				cu/=prime[o];
				++ans[i][prime[o]];
			}
		}
	}
	for(int i=1;i<=433;++i){
		for(int o=0;prime[o]<=i;++o){
			an[i][prime[o]]=an[i-1][prime[o]];
		}
		for(int o=0;prime[o]<=i;++o){
			an[i][prime[o]]+=ans[i][prime[o]];
		}
	}
	int n,k;
	ios::sync_with_stdio(false);
	cin.tie(0);
	while(cin>>n>>k){
		ll an1[435]={0};
		for(int i=0;prime[i]<=n;++i){
			an1[prime[i]]+=an[n][prime[i]];
		}
		for(int i=0;prime[i]<=k;++i){
			an1[prime[i]]-=an[k][prime[i]];
		}
		for(int i=0;prime[i]<=n-k;++i){
			an1[prime[i]]-=an[n-k][prime[i]];
		}
		ll sum=1;
		for(int i=0;prime[i]<=435;++i){
			sum*=(an1[prime[i]]+1);
		}
		cout<<sum<<endl;
	}
	return 0;
}
