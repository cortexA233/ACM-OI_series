#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N=5e4+10;
int is[N];
int prime[N];
int cnt=0;
int num[N];

void getp(){
	memset(is,1,sizeof(is));
	memset(prime,0,sizeof(prime));
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

int main(){
	getp();
	ios::sync_with_stdio(false);
	ll n,m,k,n1,m1;
	cin>>n>>m>>k;
	n1=n;m1=m;
	if((2*n*m)%k){
		cout<<"NO";
		return 0;
	}
	
	return 0;
}
