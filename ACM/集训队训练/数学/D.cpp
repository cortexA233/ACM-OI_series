#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long

int main(){
	int t;
	scanf("%d",&t);
	int t1=t;
	while(t--){
		ll n,sum=0;
		scanf("%lld",&n);
		ll lim=sqrt(n);
		for(ll i=2;i<=lim;++i){
			long long d=n/i;
			sum+=d*(d+1)/2-1;
            sum+=(d-lim)*i;
		}
		printf("Case %d: %lld\n",t1-t,sum);
	}
	return 0;
}
