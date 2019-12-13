#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int max3(int a,int b,int c){
	if(a>=b&&a>=c)return a;
	if(b>=a&&b>=c)return b;
	if(c>=b&&c>=a)return c;
}

int main(){
	string a,b,sum;
	cin>>a>>b;
	int dp[700][700],sa=a.size(),sb=b.size();
	for(int i=0;i<sa;++i){
		for(int o=0;o<sb;++o){
			if(a[i]==b[o]){
				dp[i+1][o+1]=dp[i][o]+1;
				sum.push_back(a[i]);
			}
			else{
				dp[i+1][o+1]=max(dp[i][o+1],dp[i+1][o]);
				if(dp[i][o+1]>dp[i+1][o]){
				    sum.push_back()	
				}
				if(dp[i][o+1]>dp[i+1][o]){
					
				}
			}
			
		}
	}
	cout<<dp[sa][sb]<<" "<<sum;
	return 0;
}
