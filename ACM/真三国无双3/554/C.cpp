#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define gcd __gcd

int main(){
	ll a,b;
	cin>>a>>b;
	if(a<b){
		ll t=a;
		a=b;
		b=t;
	}
	ll cha=a-b;
	ll ans=a*b/gcd(a,b);
	ll ansi=0;
	for(ll i=1;i*i<=cha;++i){
		if(!(cha%i)){
			ll k=i-b%i;
			ll ca=(a+k)/gcd(a+k,b+k)*(b+k);
			if(ca<ans){
				ans=ca;
				ansi=k;
			}else{
				if(ca==ans) ansi=min(ansi,k);
			}
			i=cha/i;
			k=i-b%i;
			ca=(a+k)/gcd(a+k,b+k)*(b+k);
			if(ca<ans){
				ans=ca;
				ansi=k;
			}else{
				if(ca==ans) ansi=min(ansi,k);
			}
			i=cha/i;
		}
	}
	cout<<ansi;
	return 0;
} 
