#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;
	cin>>n;
	int fl=1;
	ll ans;
	for(ll i=1;i*i*i<=n;++i){
		ans=i;
		if(i*i*i==n) fl=0;
	}
	ans+=fl;
	cout<<ans<<" "<<fl<<endl;
	ll sum=4*ans+2*n;
	cout<<sum;
	return 0;
}

