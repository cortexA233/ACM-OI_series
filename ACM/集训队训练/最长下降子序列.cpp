#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
	int dp[1000],a[1000],n;
	memset(dp,0,1000);
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	dp[0]=1;
	for(int i=1;i<n;++i){
        for(int j=0;j<i;++j){
        	if(a[j]<=a[i]){
        		dp[i]=max(dp[i],dp[j]+1);
			}
		}		
	}
	for(int i=0;i<n;++i){
        cout<<dp[i]<<" "; 	
	}
	
	return 0;
}
