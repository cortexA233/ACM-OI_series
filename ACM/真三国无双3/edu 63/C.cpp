#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll x[300009],p[300009];
ll cha;

int main(){
	ios::sync_with_stdio(0);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;++i){
		cin>>x[i];
	}
	int fl=0;
	ll gcds=x[1]-x[0];
	for(int i=1;i<n;++i){
		cha=x[i]-x[i-1];
		gcds=__gcd(cha,gcds);
	}
	/*
	for(int i=1;i<n;++i){
		cout<<cha[i]<<" ";
	}cout<<endl;
	cout<<gcds<<endl;
	*/
	ll ans;
	for(int i=0;i<m;++i){
		cin>>p[i];
		if(gcds%p[i]==0){
			ans=i;
			fl=1;
			break;
		}
	}
	if(fl){
		cout<<"YES"<<endl<<x[0]<<" "<<ans+1;
	}else{
		cout<<"NO";
	}
	return 0;
}

/*
13
8888000000000
*/
