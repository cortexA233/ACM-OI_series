#include<iostream>
#include<string>
#include<algorithm>
#include<queue>
#include<cmath>
using namespace std;

int a[100],n,dp[100];

int main(){
    cin>>n;
    for(int i=0;i<n;++i){
    	cin>>a[i];
	}
	dp[0]=1;
	for(int i=0;i<n;++i){
		for(int j=0;j<i;++j){
		    if(a[i]>=a[j]){
		    	dp[i]=max(dp[j]+1,dp[i]);
			}	
		}
	}
	if(dp[n-1]<30)cout<<"no";
	else cout<<"yes";
	return 0;
}
