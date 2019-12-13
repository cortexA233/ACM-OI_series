#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios::sync_with_stdio(false);
	ll a[10009],n,m;
	cin>>n>>m;
	int is[10000];
	for(int i=0;i<10000;++i) is[i]=-1;
	string s[10000];
	cin>>a[0]>>s[0];
	for(int i=1;i<m;++i){
		cin>>a[i]>>s[i];
		if(s[i]==s[i-1]&&(is[a[i]]==-1)){
			is[a[i]]=1;
		}
		if(s[i]!=s[i-1]){
			is[a[i]]=0;
		}
	}
	is[a[0]]=0;
	for(int i=1;i<=n;++i){
	//	cout<<is[i]<<" ";
		if(is[i]==1||is[i]==-1) cout<<i<<" ";
	}
//	cout<<ans;
	return 0;
}
/*
5 5
1 gugugu
2 gugugu
1 gugu
3 tingzhifudu
2 tingzhifudu
*/
