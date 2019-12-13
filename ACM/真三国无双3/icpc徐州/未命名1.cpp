#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
    int t;
	cin>>t;
	int n;
	char z;
	string s;
	while(t--){
		cin>>n>>z;
		cin>>s;
		int n1=n;
		ll ans=0;
		ll ans1=0;
		ll tmp;
		for(int i=0;i<n;++i){
			tmp=abs(z-s[i]);
			ans1+=tmp;
			if(tmp<10&&tmp>0) ans--;
			if(tmp) break;
			else --n1;
		}
		if(!ans1){
			cout<<1<<endl;
			continue;
		}
		ans+=2*n1;
		cout<<ans<<endl;
	}
	return 0;
}
