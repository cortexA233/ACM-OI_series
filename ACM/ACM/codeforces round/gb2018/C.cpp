#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios::sync_with_stdio(0);
	ll n,num=0,b,r;
	cin>>n;
	set<ll> ans;
	for(ll i=1;i*i<=n;++i){
		if(n%i==0){
			ans.insert(n/i+i*(n/i*(n/i-1)/2));
			int d=n/i;
            num+=2;	
			ans.insert(n/d+d*(n/d*(n/d-1)/2));
		}
	}
	for(auto i=ans.begin();i!=ans.end();++i){
		cout<<*i<<" ";
	}
}
