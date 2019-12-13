#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<string>
using namespace std;

unsigned long long f(unsigned long long a,int k){
	unsigned long long s=1;
	for(int i=0;i<k;++i){
		s=s*a;
		s=s%1000000007;
	}
	return s; 
}

int main(){
	unsigned long long t,n;
	int k;
	cin>>t;
	while(t){
		--t;
		unsigned long long ans=0;
		cin>>n>>k;
//		cout<<f(n,k)<<endl;
		for(int i=1;i<=n;++i){
			ans+=f(i,k);
		}
		cout<<ans%1000000007<<endl;
	}
	return 0;
}
