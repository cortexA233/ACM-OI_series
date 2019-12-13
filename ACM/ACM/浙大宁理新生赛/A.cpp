#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M 998244353
ll a[1000],n,ans=0;
ll vis[20];

void dfs(ll s,ll st,ll num){
	if(s==0&&st>0){
		for(int i=0;i<n;++i) cout<<vis[i]<<" ";cout<<endl;
		++ans;
	}
	if(st>=n){
		return ;
	}
	for(int i=0;i<n;++i){
		if(st==0){
			vis[i]=1;
			dfs(a[i],st+1,i);
			vis[i]=0;
		}
		if(vis[i]==0&&st>0&&i>num){
			vis[i]=1;
			dfs(s&a[i],st+1,i);
			vis[i]=0;
		}
	}
}

int main(){
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	memset(vis,0,sizeof(vis));
	dfs(0,0,0);
	cout<<ans<<endl;
	return 0;
}
