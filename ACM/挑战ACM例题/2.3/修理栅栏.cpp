#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

bool co(int a,int b){
	return a>b;
}

int main(){
	int n,l[1000],sum,ans=0;
	cin>>n>>sum;
	for(int i=0;i<n;++i){
		cin>>l[i];
	}
	sort(l,l+n,co);
	for(int i=0;i<n-1;++i){
		ans+=sum;
		sum-=l[i];
	}
	cout<<ans;
	return 0;
}
