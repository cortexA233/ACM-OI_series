#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int n,a[10000000],sum=1,t=1;

int main(){
	ios::sync_with_stdio(false);
	cin>>n; 
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	for(int i=1;i<n;++i){
		if(a[i]==a[i-1]+1){
			++t;
			if(t>sum)sum=t;
		}else{
			t=1;
		}
	}
	cout<<sum; 
	return 0;
} 
