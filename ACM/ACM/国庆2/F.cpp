#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll np(ll a,ll b){
	ll s=1;
	for(ll i=0;i<b;++i){
		s*=a;
	}
	return s;
}

int main(){
	ll n,d;
	cin>>n>>d;
	ll ansl=0,ansr=0;
	for(int i=2;i<=n;++i){
	    ansl+=np(2,i-2);
	}
	for(int i=2;i<=n-d;++i){
		ansr++;
	}
	cout<<ansl-ansr;
	return 0;
} 
