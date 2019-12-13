#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios::sync_with_stdio(false);
	ll m,n,a[200009];
	cin>>n;
	m=n;
	ll p=0;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		if(a[i]>p) p=a[i];
	}
	for(int i=2;i<=n;++i){
		if(a[i]>a[i-1]){
			m+=a[i]-a[i-1]-1; 
		}
		if(a[i]<a[i-1]){
			m+=p-a[i-1]+a[i];
		}
		if(a[i]==a[i-1]){
			m+=p;
		}
	}
	cout<<m;
	return 0;
}
