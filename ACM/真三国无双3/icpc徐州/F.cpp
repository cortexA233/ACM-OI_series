#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
    int t;
	cin>>t;
	while(t--){
		int n,k,ans=1;
		cin>>n;
		pii tmp;
		map<pii,int> m1,m2;
		cin>>k;
		for(int o=0;o<k;++o){
			cin>>tmp.first>>tmp.second;
			m1[tmp]++;
		}
		m2=m1;
		for(int i=1;i<n;++i){
			cin>>k;
			for(int o=0;o<k;++o){
				cin>>tmp.first>>tmp.second;
				m2[tmp]++;
			}
			for(auto i:m2){
				if(m1[i.first]==m2[i.first]){
					if(m1[i.first]>ans) ans=m1[i.first];
					m1[i.first]=0;
				}
			} 
			for(auto i:m1){
				if(m1[i.first]==0){
					m2[i.first]=0;
				}
			} 
			m1=m2;
		}
		for(auto i:m1){
			if(i.second>ans) ans=i.second;
		} 
		for(auto i:m2){
			if(i.second>ans) ans=i.second;
		} 
		if(ans==1){
			cout<<0<<endl; 
			continue;
		}
		cout<<ans<<endl;
	}
	return 0;
}
