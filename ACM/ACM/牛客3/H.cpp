#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define M 1000000007

ll ny[100009];

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
	for(int i=1;i<=100005;++i){
		ny[i]=kpow(i,M-2);
	}
	ll n,m,t,b,a;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld%lld",&n,&m);
		for(int i=0;i<n-1;++i){
			scanf("%lld%lld",&a,&b);
		}
		ll ans=(c(n-1,m-1)*fac(m))%M;
		printf("%lld\n",ans); 
	}
	
	return 0;
} 
