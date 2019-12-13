#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
#define ll unsigned long long

ll mod;
ll fac[100009];
ll inv[100009];

ll qmul(ll a,ll b){
	ll s=0;
	a%=mod;b%=mod;
	while(b){
		if(b&1) s=(s+a)%mod;
		a=(a+a)%mod;
		b>>=1; 
	}
	return s;
}

ll qpow(ll a,ll b){
	ll s=1;
	a%=mod;
	while(b){
		if(b&1) s=((s%mod)*(a%mod))%mod;
		a=((a%mod)*(a%mod))%mod;
		b>>=1;
	}
	return s;
}

void init(){
	fac[0]=1;inv[0]=0;
	for(ll i=1;i<=100005;++i){
		fac[i]=(fac[i-1]*i)%mod;
		inv[i]=qpow(fac[i],mod-2);
	}
}

ll fc(ll a,ll b){
	fac[0]=fac[1]=1;
	for(ll i=2;i<=a;++i)
		fac[i]=(fac[i-1]*i)%mod;
    ll s=1;
	s=(s*(fac[a]%mod))%mod;
	s=(s*qpow(fac[b],mod-2))%mod;
    s=(s*qpow(fac[a-b],mod-2))%mod;
	return s;
}

ll lucas(ll a,ll b){
	if(a<mod&&b<mod){
		return fc(a,b);
	}
	return (fc(a%mod,b%mod)*lucas(a/mod,b/mod))%mod;
}

int main(){
	int t;
	ll n,m,p;
	scanf("%d",&t);
	while(t--){
		scanf("%lld%lld%lld",&n,&m,&p);
		mod=p;
		printf("%lld\n",lucas(n+m,n));
	}
	return 0;
}
