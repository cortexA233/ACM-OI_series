#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n,m,h;
	int a[1000],b[1000],c[109][109];
	cin>>n>>m>>h;
	for(int i=0;i<m;++i){
		cin>>a[i];
	}
	for(int i=0;i<n;++i){
		cin>>b[i];
	}
	int ans[109][109]={0};
	for(int i=0;i<n;++i){
		for(int o=0;o<m;++o){
			cin>>c[i][o];
			if(c[i][o]==1){
				ans[i][o]=min(a[o],b[i]);
			}
		}
	}
	for(int i=0;i<n;++i){
		for(int o=0;o<m;++o){
			cout<<ans[i][o]<<" ";
		}cout<<endl;
	}
	
	return 0;
}
