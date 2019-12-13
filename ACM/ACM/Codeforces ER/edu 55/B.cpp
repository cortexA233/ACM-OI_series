#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<int,priority_queue<int>> m;

int main(){
	ios::sync_with_stdio(0);
	int n,m1,s[100009],r[100009];
	ll sum[100009]={0};
	cin>>n>>m1;
	for(int i=0;i<n;++i){
		cin>>s[i]>>r[i];
		m[s[i]].push(r[i]);
	}
	ll maxn=0;
	for(int o=1;o<=n;++o){
		ll ans=0;
		for(auto i=m.begin();i!=m.end();++i){
			if((*i).second.size()){
				ans+=(*i).second.top();
				ans+=sum[(*i).first];
				sum[(*i).first]+=(*i).second.top();
				(*i).second.pop();	
			}
		}
		maxn=max(maxn,ans);
	//	if(maxn==ans) cout<<"!"<<endl;
	}
	cout<<(maxn>0?maxn:0);
	return 0;
}
