#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>

ll n,k,lim;
int vis[10000009]={0};
ll MOD=1e9+7;

ll qp(ll a,ll b){
	ll ans=1;
	while(b){
		if(b&1) ans=(ans*a)%MOD;
		a=(a*a)%MOD;
		b>>=1;
	}
	return ans;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<
	}
	return 0;
}
