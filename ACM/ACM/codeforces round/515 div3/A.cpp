#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	ll l,v,L,r;
	while(t--){
		cin>>L>>v>>l>>r;
		ll ans=L/v;
		ll ans1=(l-1)/v;
		ll ans2=r/v;
		ans=ans+ans1-ans2;
		if(ans>0)
		cout<<ans<<endl;
		else cout<<0<<endl;
	}
	return 0;
}
