#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

int main(){
	int t;
	const double Pi=3.1415926535,e=2.718;
	cin>>t;
	while(t){
		--t;
		int n;
		scanf("%d",&n);
		int ans=(log(2*n*Pi)/log(8))/2+n*(log(n/e)/log(10))+1;
		printf("%d",ans);
	}
	return 0;
}

//ans = log10(2*n*Pi)/2+n*log10(n/e) + 1

