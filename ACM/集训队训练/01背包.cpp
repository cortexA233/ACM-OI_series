#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
#include<cstdio>
using namespace std;

int w[1000],v[1000],n,m,s[1000][1000],s2[1000][1000]={0},t1=0,t2=0; 

//递归记忆化搜索实现 
int dp(int i,int j){
    ++t1; 
	if(i<=0)return 0;
	if(j-w[i]>=0)return s[i][j]=max(dp(i-1,j),dp(i-1,j-w[i])+v[i]);
	if(j-w[i]<0)return s[i][j]=dp(i-1,j);
} 

int main(){
	cin>>n>>m;
	for(int i=0;i<n;++i){
		cin>>w[i]>>v[i];
	}
	//递推实现
	for(int j=0;j<m;++j){
        s2[0][j]=0; 
	} 
	for(int i=1;i<=n;++i){
		for(int j=0;j<=m;++j){
		    ++t2;
			if(j-w[i]<0&&i>1) s2[i][j]=s2[i-1][j];
        	if(j-w[i]>=0) s2[i][j]=max(s2[i-1][j],s2[i-1][j-w[i]]+v[i]);
		}
	}
	//递推完成 
	dp(n,m);
	cout<<t1<<" "<<t2<<endl;
	cout<<s[n][m]<<" "<<s2[n][m];
	return 0;
}
