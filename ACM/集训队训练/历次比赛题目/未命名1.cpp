#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;

int main(){
	int a,b,ans=1;
	cin>>a>>b;
	a=a%100007;
	while(b!=0){
		if(b&1) ans=(ans*a)%1007;
		a=(a*a)%1007;
		b>>=1;
	}
	cout<<ans;
	return 0;
}
