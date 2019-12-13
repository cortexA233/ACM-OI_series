#include<cstdio>
#include<algorithm>
using namespace std;
#define ll long long

int main(){
	ll n,a[50009],t;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		for(int i=0;i<n;++i){
			scanf("%lld",&a[i]);
		}
		ll dp1[50009]={0},dp2[50009]={0};
		ll ans=-1e15;
		dp1[0]=a[0];dp2[n-1]=a[n-1];
		for(int i=1;i<n;++i) dp1[i]=max(dp1[i-1]+a[i],a[i]);
		for(int i=1;i<n;++i) dp1[i]=max(dp1[i-1],dp1[i]);
		for(int i=n-2;i>=0;--i) dp2[i]=max(dp2[i+1]+a[i],a[i]);
		for(int i=n-2;i>=0;--i) dp2[i]=max(dp2[i+1],dp2[i]);
		for(int i=1;i<n;++i){
			if(dp1[i-1]+dp2[i]>ans) ans=dp1[i-1]+dp2[i];
		}
	/*	for(int i=n-2;i>=0;--i){
			if(dp1[i]+dp2[i+1]>ans) ans=dp1[i]+dp2[i+!];
		}*/
		printf("%lld\n",ans);
	}
	return 0;
}
