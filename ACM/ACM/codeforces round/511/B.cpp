#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N=10009;
int is[N];
int prime[10000];
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

ll a[300009];
int ma[15000009];

int main(){
	getp();
	cout<<cnt<<endl; 
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	ll ans=0;
	for(int i=0;i<n;++i){
	    cin>>a[i];
	}
	ll gcd1=__gcd(a[1],a[0]);
	for(int i=1;i<n;++i){
	    gcd1=__gcd(a[i],gcd1);
	}
	for(int i=0;i<n;++i){
		ll t=a[i];
		a[i]/=gcd1;
	}
	
	cout<<ans;
	return 0;
}
