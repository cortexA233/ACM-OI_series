#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t){
		--t;
		long long n;
		scanf("%lld",&n);
		long long s=1,b=n;
		n=n%10;
		while(b){
			if(b%2){
				s=(s*n)%10;
			}
			n=(n*n)%10;
			b=b/2;
		}
		cout<<s<<endl;
	} 
	return 0;
}
