#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll absn(ll a){
	if(a<0)return -a;
	return a;
}

int main(){
	ll n,m;
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		ll ans=0,sx=0,sy=0,xs=0,ys=0;
		cin>>n>>m;
		ans+=absn(m)/2;
		if(absn(m)%2){
			ys=1;
		}
		if(absn(m/2)%2){
			if(n>=0) --n;
			else ++n;
		}
		ans+=absn(n)/2;
		if(absn(n)%2){
			xs=1;
		}
		if(xs+ys==0){
			cout<<ans<<endl;
			continue;
		}
		if(xs+ys==1){
			cout<<ans+3<<endl;
			continue;
		}
		if(xs+ys==2){
			cout<<ans+2<<endl;
			continue;
		}
	}
	
	return 0;
} 
