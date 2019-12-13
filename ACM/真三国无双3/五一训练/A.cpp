#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios::sync_with_stdio(0);
	int n,x;
	ll a[100009];
	a[0]=-1e9-3;
	cin>>n>>x;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int ans=n;
	for(int i=n;i>0;--i){
		if(a[i]+a[i-1]<=x){
			break;
		}
		--ans;
	}
	cout<<ans;
	return 0;
}
