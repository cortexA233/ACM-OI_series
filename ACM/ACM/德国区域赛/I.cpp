#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	int x[300009];
	int ans=0;
	for(int i=0;i<n;++i){
		cin>>x[i];
	}
	for(int i=m-1;i<n;i+=m){
		ans+=x[i];
	}
	cout<<ans;
	return 0;
}
