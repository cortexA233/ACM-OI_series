#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a[300009],p[300009];
ll dp[300009];
ll qz[300009];
ll l,r;

ll fmax(ll *a,ll n){	
	ll ans=-1e18-9;
	dp[0]=a[0];
	qz[0]=a[0];
	l=0;r=0;
	ans=max(ans,dp[0]);
	for(int i=1;i<n;++i){
		qz[i]=qz[i-1]+a[i];
		dp[i]=max(dp[i-1]+a[i],a[i]);
		if(dp[i]>ans) r=i;
		ans=max(ans,dp[i]);
	}
	for(int i=0;i<r;++i){
		if(qz[r]-qz[i]==ans){
			l=i+1;break;
		}
	}
	if(qz[r]==ans) l=0;
//	cout<<l<<" "<<r<<"!"<<endl;
	return ans;
}

ll fmin(ll *a,ll n){	
	ll ans=0;
	dp[0]=a[0];
	qz[0]=a[0];
	l=n;r=n+1;
	ans=min(ans,dp[0]);
	for(int i=1;i<n;++i){
		qz[i]=qz[i-1]+a[i];
		dp[i]=min(dp[i-1]+a[i],a[i]);
		if(dp[i]<ans) r=i;
		ans=min(ans,dp[i]);
	}
	for(int i=0;i<r;++i){
		if(qz[r]-qz[i]==ans){
			l=i+1;break;
		}
	}
	if(qz[r]==ans&&r<n) l=0;
	return ans;
}

int main(){
	ios::sync_with_stdio(0);
	ll n,x;
	cin>>n>>x;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
//	f(a,n);
	
	if(x>0){
		for(int i=l;i<=r;++i){
			a[i]*=x;
		}
		cout<<max((ll)0,fmax(a,n));
	}
	if(x==0){
		fmax(a,n);
		ll sl=l,sr=r;
	//	cout<<sl<<" "<<sr<<"!\n";
	//	cout<<fmax(a,n)+0<<endl;
	//	cout<<fmax(a+sr+1,n-sr-1)<<"you"<<endl;
	//	cout<<fmax(a,sl-1)<<"zuo"<<endl;
		cout<<fmax(a,n)+max(fmax(a+sr+1,n-sr-1),fmax(a,sl));
	}
	if(x<0){
		fmin(a,n);
	//	cout<<l<<" "<<r<<endl;
		for(int i=l;i<=r;++i){
			a[i]*=x;
		}
		cout<<max((ll)0,fmax(a,n));
	}
	return 0;
}

/*
12 0
1 3 3 -8 1 3 3 7 1 3 3 7

*/
