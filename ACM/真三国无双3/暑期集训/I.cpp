#include<iostream>
#include<cstdio>
using namespace std;

int t,n,a[200009],ans[200009],dp[200009];

int gmin(int a,int b){
	if(a<b)return a;
	return b;
}

int main(){
	cin>>t;
	while(t){
		for(int i=0;i<200009;++i){
			dp[i]=-1;
		}
		--t;
		scanf("%d",&n);
		for(int i=0;i<n;++i){
			scanf("%d",&a[i]);
		}
		ans[0]=0;dp[a[0]]=0;
		for(int i=1;i<n;++i){
			if(dp[a[i]]>=0){
				ans[i]=gmin(dp[a[i]]+1,ans[i-1]+1);
				dp[a[i]]=ans[i];
			}else{
				ans[i]=ans[i-1]+1;
				dp[a[i]]=ans[i];
			}
		}
	/*	for(int i=0;i<n;++i){
			printf("%d ",ans[i]);
		}*/
		printf("%d\n",ans[n-1]);
	}
	return 0;
}
