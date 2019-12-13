#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M 998244353

ll ny[1000009];

ll fac(ll a){
	ll ans=1;
	for(ll i=2;i<=a;++i){
		ans=(ans*i)%M;
	}
	return ans;
}

ll kpow(ll a,ll b){
	ll ans=1;
	while(b){
		if(b&1) ans=(ans*a)%M;
		a=(a*a)%M;
		b>>=1;
	}
	return ans;
}

ll c(ll a,ll b){
	ll ans=fac(a);
	for(ll i=1;i<=b;++i){
		ans=(ans*ny[i])%M;
	}
	for(ll i=1;i<=a-b;++i){
		ans=(ans*ny[i])%M;
	}
	return ans;
}

int main(){
	ny[2]=kpow(2,M-2);
	ios::sync_with_stdio(false);
	ll a[100009],n;
	cin>>n;
	ll ans=1;
	for(int i=0;i<n;++i){
		cin>>a[i];
		ans+=a[i];
	}
	ans=(ans+((ans%M)*((ans-1)%M))%M*ny[2])%M;
	cout<<ans;
	return 0;
}

