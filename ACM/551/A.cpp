#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n,t,tm=0;
	cin>>n>>t;
	int s[1000],d[1000];
	for(int i=0;i<n;++i){
		cin>>s[i]>>d[i];
		if(d[i]>tm) tm=d[i]; 
	}
	int ans[100009];
	for(int i=0;i<100004;++i) ans[i]=-1;
	for(int i=0;i<n;++i){
		for(int o=s[i];o<=t+tm;o+=d[i]){
			ans[o]=i;
		}
	}
	for(int i=t;i<=t+tm;++i){
		if(ans[i]!=-1){
			cout<<ans[i]+1;
			return 0;
		}
	}
	return 0;
}
