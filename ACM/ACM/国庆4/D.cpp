#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios::sync_with_stdio(false);
	ll a[100009],n;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	sort(a,a+n);
	ll ans=0;
	for(int i=1;i<n;++i){
		ans+=a[i]+a[0];
	}
	cout<<ans;
	return 0;
}
