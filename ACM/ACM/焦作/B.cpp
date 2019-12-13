#include<bits/stdc++.h> 
using namespace std;
#define ll long long

ll M=1e9+7;
 
ll b2[30]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,
8388608,16777216,33554432,67108864,134217728,268435456,536870912};

int main(){
	ll q,n;
	ll t;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld%lld",&n,&q);
		ll v[29],c[29];
		for(int i=0;i<n;++i){
			scanf("%lld%lld",&v[i],&c[i]);
		}
        vector<ll> w;
		for(int i=0;i<n;++i){
			for(int o=0;o<c[i];++o){
				w.push_back(b2[o]*v[i]);
			}
		}
		n=w.size();
		ll ans=0;
		ll dp[10009]={0};
		dp[0]=1;
		ll s;
		for(int i=0;i<n;++i){
	    	for(int o=10000;o>=w[i];--o){
	    	    dp[o]=(dp[o]+dp[o-w[i]])%M;
	     	//    if(dp[o]==s) ++ans;
     		}
    	}
		while(q--){
			scanf("%lld",&s);
		    printf("%lld\n",dp[s]);
		} 
	}
	return 0;
}

/*
1
3 3
2 3
1 4
3 2
1
2
4
*/
