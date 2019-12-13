#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios::sync_with_stdio(false);
	ll n,m,k;
	cin>>n>>m>>k;
	ll a[200009];
	for(ll i=1;i<=n;++i){
		cin>>a[i];
	}
	ll k1=k,m1=m,ans=0;
	for(ll i=n;i>=1;--i){
		if(k1>=a[i]){
			k1-=a[i];
		}else{
			k1=k;
			--m1;
			k1-=a[i];
		}
	/*	if(k1==0){
			--m1;
			k1=k;
		}*/
	//	cout<<k1<<" "<<m1<<endl;
		if(m1<=0){
			ans=i;
			break;
		}
		
	}
//	cout<<ans<<endl;
	cout<<n-ans;
	return 0;
}

/*
5 4 5
1 5 5 5 5
*/
