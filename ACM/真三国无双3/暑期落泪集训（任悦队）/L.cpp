#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<string>
using namespace std;

long long gcd(long long a,long long b){
	return a%b?gcd(b,a%b):b;
}

long long gpow(long long a,long long b){
	long long s=1;
	for(long long i=0;i<b;++i){
		s*=a;
	}
	return s;
}

int main(){
	long long n;
	while(cin>>n){
		if(!n){
			cout<<0<<endl;
			continue;
		}
		if(n==-1)break;
		long long p[1000];p[0]=1; 
		for(int i=1;i<=n;++i){
			p[i]=p[i-1]*3;
		}
		long long s1=0,s2;
		for(int i=0;i<n;++i){
			s1+=p[gcd(i,n)];
		}
		if(n%2==1) s2=n*p[(n+1)/2];
		else s2=n/2*(p[n/2+1]+p[n/2]);
		cout<<(s1+s2)/2/n<<endl;
	}
	return 0;
}
