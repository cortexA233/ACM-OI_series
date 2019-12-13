#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<queue>
#include<cmath>
using namespace std;

int main(){
	int sm,n,m,h,v[200],w[200],dp[300][300],get[200],gs=0,ans=0,judge,maxn;
	while(1){
		cin>>n>>m>>h;
		ans=0,gs=0;
		judge=0;//0表示未满 
		if(n==0)break;
		for(int i=1;i<=n;++i){
			cin>>w[i]>>v[i];
		}
		sm=m+h;dp[0][0]=0;
		int sm1=sm,n1=n;
		for(int i=1;i<=n;++i){
			for(int j=0;j<=sm;++j){
			    if(j>=w[i]){
			    	dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
				}else{
					dp[i][j]=dp[i-1][j];
				}
			}
		}
		while(n1&&sm1){
			if(sm1>=w[n1]&&dp[n1][sm1]==dp[n1-1][sm1-w[n1]]+v[n1]){
				get[gs]=n1;
				++gs;
				sm1-=w[n1];
			}
			--n1;
		}n1=n;
		for(int i=0;i<gs;++i){
			n1-=get[i];
		}
		if(!n1)judge=1;//1表示满了 
		if(h==0||judge){
			cout<<dp[n][sm]<<endl;
		}else{
			maxn=0;
    		for(int i=1;i<=n;++i){
    			judge=1;//1表示符合条件 
    			for(int j=0;j<gs;++j){
    				if(get[j]==i){
    					judge=0;
    					break;
					}
				}if(judge){
					if(v[i]>maxn)maxn=v[i];
				}
			}
			cout<<dp[n][sm]+maxn<<endl;
		}
	}
	return 0;
}


















