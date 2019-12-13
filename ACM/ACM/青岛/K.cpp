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
	ll T;
	cin>>T;
	while(T--){
		ll a,b,c,d,v,t;
		scanf("%lld%lld%lld%lld%lld%lld",&a,&b,&c,&d,&v,&t);
		ll ans=0;
	//	cout<<ans<<"!"<<endl;
		ll zq=lcm(a,c);
		vector<ll> vec;
		for(ll i=0;i<=zq;i+=a){
			vec.push_back(i);
		}
		for(ll i=0;i<=zq;i+=c){
			vec.push_back(i);
		}
		int n=vec.size();
		int n1=n-1;
    	sort(vec.begin(),vec.end());
		for(int i=1;i<n1;++i){
			if(vec[i]%a==0) ans+=b-1;
			if(vec[i]%b==0) ans+=d-1;
			if(vec[i]==0||vec[i]==zq){
			    ++ans;
			}
		}
		for(int i=2;i<n1;++i){
			if(vec[i]-vec[i-1]<=v){
			    ++ans;
			} 
		}
		ans*=(t/zq);
		if(t/zq>0) ans+=(t/zq-1);
/*		for(int i=0;i<n;++i){
			cout<<vec[i]<<" ";
		}cout<<endl;*/
//		cout<<ans<<"!"<<endl;
		ll zq1=t-(t/zq)*zq;
//		cout<<zq1<<endl;
        ll ans0=ans;
		vec.clear();
		for(ll i=0;i<=zq1;i+=a){
			vec.push_back(i);
		}
		for(ll i=0;i<=zq1;i+=c){
			vec.push_back(i);
		}
		n=vec.size();
		sort(vec.begin(),vec.end());
		for(int i=1;i<n;++i){
			if(vec[i]%a==0) ans+=b-1;
			if(vec[i]%b==0) ans+=d-1;
			if(vec[i]==0||vec[i]==zq){
			    ++ans;
			}
		}
		for(int i=2;i<n;++i){
			if(vec[i]-vec[i-1]<=v){
			    ++ans;
			} 
		}
	/*	for(int i=0;i<n;++i){
			cout<<vec[i]<<" ";
		}cout<<endl;
	/*	for(int i=2;i<n-1;++i){
			if(vec[i]-vec[i-1]<=v) ++ans2;
		}*/
		if(zq1==0) ans=ans0;
		printf("%lld\n",ans);
	}
	return 0;
}
