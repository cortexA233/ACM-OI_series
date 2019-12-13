#include<bits/stdc++.h> 
using namespace std;
#define ll long long

ll summ(ll n){
	return n*(n+1)*(n+2)/6;
}

ll lcm(ll a,ll b){
	return a*b/__gcd(a,b);
}

ll absn(ll a){
	if(a<0) return -a;
	return a;
}

int main(){
	ll m,n,k;
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll t;
	string a;
	cin>>t;
	while(t--){
		ll a,b,c,d,v,t;
		cin>>a>>b>>c>>d>>v>>t;
		ll ans=(t/a+1)*(b-1)+(t/c+1)*(d-1)+b+d-1;
		ll zq=lcm(a,c);
		ll ans1=0;
		for(ll i=a;i<=zq;i+=a){
			for(ll o=c;o<=zq;o+=c){
				if(absn(i-o)<=v) ++ans1;
			}
		}
		ans+=ans1*(t/zq);
		ll zq1=t-(t/zq)*zq;
		ll ans2=0;
		for(ll i=a;i<=zq1;i+=a){
			for(ll o=c;o<=zq1;o+=c){
				if(absn(i-o)<=v&&i<=zq1&&o<=zq1) ++ans2;
			}
		}
		cout<<ans+ans2<<endl;
	}
	return 0;
}

/*
2
8 2 5 1 5 18
10 2 5 1 2 10
*/
