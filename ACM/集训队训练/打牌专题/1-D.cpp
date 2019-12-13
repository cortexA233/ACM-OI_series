#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;

int dp[100005];

int main(){
	int C;
	cin>>C;
	while(C--){
		int n,m,e,f;
		scanf("%d%d",&e,&f);
		m=f-e;
		scanf("%d",&n);
		int w[2001],v[2001];
		for(int i=0;i<n;++i){
			scanf("%d%d",&v[i],&w[i]);
		}
		memset(dp,0,sizeof(dp));
		for(int i=0;i<n;++i){
			for(int o=w[i];o<=m;++o){
				if(dp[o]!=0){
					dp[o]=min(dp[o-w[i]]+v[i],dp[o]);
				}else{
					dp[o]=dp[o-w[i]]+v[i];
				}
			}
		}
		if(dp[m]>0) printf("The minimum amount of money in the piggy-bank is %d.\n",dp[m]);
		else printf("This is impossible.\n");
	}
	return 0;
}

