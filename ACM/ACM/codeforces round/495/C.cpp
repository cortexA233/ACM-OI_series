#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring> 
#include<queue>
using namespace std;

int main(){
	int n,a[100009],t[100009]={0},last[100009]={0},bcf[100009]={0};
	cin>>n;
	long long ans=0;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	} 
	int sum=0;
	for(int i=1;i<=n;++i){
		++t[a[i]];
		if(t[a[i]]==1){
			bcf[i]=bcf[i-1]+1;ans+=bcf[i-1];
		}
		else{
			bcf[i]=bcf[i-1];
			if(t[a[i]]==2) ++ans;
			ans+=bcf[i]-bcf[last[a[i]]];	
		} 
		last[a[i]]=i;
	} 
	cout<<ans;
	return 0;
}
