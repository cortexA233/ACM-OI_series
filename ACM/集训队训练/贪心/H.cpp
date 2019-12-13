#include<bits/stdc++.h>
using namespace std;
#define ll long long

map<ll,priority_queue<ll>> test;

struct pe{
	ll a;
	ll b;
};

int com(pe n1,pe n2){
	if(n1.a!=n2.a) return n1.a<n2.a;
	else return n1.b>n2.b;
}

int main(){
	ll n,t;
	pe s[30009];
	cin>>n>>t;
	for(int i=0;i<n;++i){
		scanf("%lld%lld",&s[i].a,&s[i].b);
		test[s[i].a].push(s[i].b);
	}
//	sort(s,s+n,com);
	ll ans=0;
	if(test[s[0].a].empty()){
		cout<<-1;
		return 0;
	}
	ll id1=1,id2=1,en=1;
	for(int i=1;i<=n;++i){
		for(int o=id1;o<=id2;++o){
			if(!test[o].empty()){
				en=test[o].top();
				test[o].pop();
				id1=o;
				id2=en;
				++ans;
			}
		}
	}
	cout<<ans;
	return 0;
}
