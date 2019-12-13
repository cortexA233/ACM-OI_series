#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,m;
	cin>>n>>m;
	if(n<=2&&m<=2){
		cout<<0;return 0;
	}
	int a[]={0,0,0,2,2,4,6}; 
	int n1=(n/2)*2,m1=(m/2)*2;
	ll ans=n1*m1;
	int lef=0;
	if(n1<n&&m1==m){
		lef=m;
	}
	if(n1==n&&m1<m){
		lef=n;
	}
	if(n1<n&&m1<m){
		lef=m+n-1;
	}
	int id=6;
	while(lef){
		ans+=lef/a[id];
		lef=lef%id;
		--id;
	}
	cout<<ans;
	return 0;
}
