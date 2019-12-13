#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	ll sum=(n*(n+1)/2);
	if(sum%3!=0){
		cout<<"Impossible";
		return 0;
	}
	ll a[200009]={0};
	memset(a,0,sizeof(a));
	
	ll ans=sum/3;
	ll i=n;
	
	while(i){
		if(!a[i]&&ans-i>=0){
		//	cout<<i<<" ";
			a[i]=1;
			ans-=i;
		}
		--i;
		if(ans==0) break;
	}//cout<<endl;
	if(ans){
		cout<<"Impossible";
		return 0;
	}
	i=n;ans=sum/3;
	while(i){
		if(!a[i]&&ans-i>=0){
		//	cout<<i<<" ";
			a[i]=2;
			ans-=i;
		}
		--i;
		if(ans==0) break;
	}//cout<<endl;
	if(ans){
		cout<<"Impossible";
		return 0;
	}
	for(int i=1;i<=n;++i){
		if(!a[i]) cout<<3<<" ";
		else cout<<a[i]<<" ";
	}
	return 0;
}
