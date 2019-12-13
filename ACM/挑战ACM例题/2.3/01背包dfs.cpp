#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;

int n,wei,v[1000],w[1000],sum=0;

void dfs(int t,int ans,int m){
	if(m==n){
		if(ans>sum&&t<=wei){
			sum=ans;
			cout<<sum<<endl; 
		}
		return ;
	}
	if(t>wei){
		return;
	}
	if(t==wei){
		if(ans>sum){
			sum=ans;
			cout<<sum<<endl; 
		}
		return;
	}else{
		if(ans>sum){
			sum=ans;
			cout<<sum<<endl; 
		}
		dfs(t+w[m],ans+v[m],m+1);
		dfs(t,ans,m+1);
	}
}

int main(){
	cin>>n>>wei;
	for(int i=0;i<n;++i){
		cin>>w[i]>>v[i];
	} 
	dfs(0,0,0);
	cout<<sum<<endl; 
	return 0;
}
