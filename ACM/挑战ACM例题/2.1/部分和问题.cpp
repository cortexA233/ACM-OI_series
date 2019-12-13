#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int judge=1,n,m,a[30],ans=0,j[30]={0};

void dfs(int b){
	judge=0;
	if(b>m){
		for(int i=0;i<n;++i){
			j[i]=0;
		}
    	return;	
	}
	if(b==m){
		ans=1;
		for(int i=0;i<n;++i){
			j[i]=0;
		}
		return;
	}
	j[b]=1;
	for(int i=0;i<n;++i){
		if(j[i]==0){
			dfs(b+a[i]);judge=1;
		}	
	}if(judge==0)return ;
}

int pr[100];

void d2(int st,int sum){
	if(st>=n){
		if(sum==m)ans=1;return;
		if(sum!=m)return;
	}
	d2(st+1,sum);d2(st+1,sum+a[st+1]);
}

int main(){
	cin>>n>>m;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	dfs(0);
	cout<<ans<<" ";
	ans=0;
	d2(-1,0);
	cout<<ans;
	return 0;
}
