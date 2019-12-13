#include<iostream>
#include<cstring>
#include<algorithm>
#include<string>
#include<queue>
#include<cstdio>
using namespace std;

int main(){
	long long n,t,n1,n2;
	cin>>t;
	while(t){
		--t;
		cin>>n;
		n1=n/2;
		n2=n-n1;
		cout<<n1*n2<<endl;
	}
	return 0;
}
