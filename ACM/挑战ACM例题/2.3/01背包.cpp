#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;

int w[1000],v[1000],n,wei,sum,dp[1500][1500];

int main(){
	cin>>n>>wei;
	for(int i=0;i<n;++i){
		cin>>w[i]>>v[i];
	}
	for(int i=0;i<n;++i){
		dp[i][wei]=0;
	} 
	for(int i=0;i<n;++i){
		for(int o=wei;o>=0;--o){
			if(wei-o>=w[i])
			dp[i][o]=max(dp[i-1][o+w[i]]+v[i],dp[i-1][o]);
			else
			dp[i][o]=dp[i-1][o];
		}
	}
	cout<<dp[n-1][0];
	return 0;
}

/*
4 5
2 3
1 2
3 4
2 2
*/
