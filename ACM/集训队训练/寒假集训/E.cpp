#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a=2,c=1e9+7,b=0;
char s[100009];

ll qp(ll a,ll b){
	ll ans=1;
	while(b>0){
		if(b&1) ans=(ans*a)%c;
		a=(a*a)%c;
		b/=2; 
	}
	return ans;
}

ll phi(ll a){
	ll ans=a;
	for(int i=2;i*i<=a;++i){
		if(a%i==0){
			ans-=ans/i;
			while(a%i==0){
				a/=i;
			}
		}
	}
	if(a>1){
		ans-=ans/a;
	}
	return ans;
}

int main(){
	string s2;
	ios::sync_with_stdio(0);
	cin>>s>>s2;
	ll pc=phi(c);
	int n=strlen(s);
	for(int i=0;i<n;++i){
	//	cout<<b<<" "<<s[i]-'0'<<endl;
		b=(((b*10)%pc)+(s[i]-'0')%pc)%pc;
	}
//	cout<<b<<" "<<pc<<endl;
	cout<<qp(a,b+pc);
	return 0;
}
