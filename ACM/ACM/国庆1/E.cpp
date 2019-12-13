#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll absn(ll a){
	if(a<0)return -a;
	return a;
}

int main(){
	ios::sync_with_stdio(false); 
	ll a[100009],n,m;
	cin>>n>>m;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	sort(a,a+n);
	ll ans=n;
	for(int i=1;i<n;++i){
		if(absn(a[i]-a[i-1])<=m) --ans;
	}
	cout<<ans;
	return 0;
}
