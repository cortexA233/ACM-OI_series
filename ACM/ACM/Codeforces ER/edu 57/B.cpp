#include<bits/stdc++.h>
using namespace std;
#define M 998244353
#define ll long long

int main(){
	ios::sync_with_stdio(0);
	ll n;
	cin>>n;
	string s;
	cin>>s;
	char a=s[0],b=s[n-1];
	ll n1,n2;
	for(ll i=0;i<n;++i){
		if(s[i]!=a){
			n1=i;
			break;
		}
	}
	for(ll i=n-1;i>=0;--i){
		if(s[i]!=b){
			n2=i;
			break;
		}
	}
	if(a!=b){
		++n2;
	//	cout<<n1<<" "<<n2<<endl;
		cout<<(1+n1+(n-n2))%M;
	}else{
		cout<<(1+n1)<<" "<<(n-n2)<<endl;
		cout<<(((1+n1)%M)*((n-n2)%M))%M;
	}
	return 0;
} 
