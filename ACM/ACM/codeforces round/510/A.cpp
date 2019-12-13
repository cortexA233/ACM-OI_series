#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,m,a[10009];
	cin>>n>>m;
	ll s=m;
	ll maxn=0;
	for(int i=0;i<n;++i){
		cin>>a[i];s+=a[i];
		if(a[i]>maxn) maxn=a[i];
	}
	if(s%n==0) cout<<s/n<<" ";
	else cout<<s/n+1<<" ";
	cout<<maxn+m;
	return 0;
}
