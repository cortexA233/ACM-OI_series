#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios::sync_with_stdio(false);
    ll b,g,a[100009],n;
    ll s=0;
    cin>>n>>b>>g;
    for(ll i=0;i<n;++i){
    	cin>>a[i];
    	s+=a[i];
	}
	ll x=(s-abs(g-b))/2;
	ll dp[10000]={0};
	for(ll i=0;i<n;++i){
		for(ll o=x;o>=a[i];--o){
			dp[o]=max(dp[o-a[i]]+a[i],dp[o]);
		}
	}
	ll ans1=dp[x]+b,ans2=s-dp[x]+g;
	ll ans3=dp[x]+g,ans4=s-dp[x]+b;
	cout<<max(min(ans1,ans2),min(ans3,ans4));
	return 0;
}


