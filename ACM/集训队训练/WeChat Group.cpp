#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;

long long a,k,ans,t1=0,t,n,f[1000009];

long long poww(){
	return 0;
}

int main(){
	cin>>t;
	while(t1<t){	
    	cin>>n;
		++t1;
		a=1%1000000007;
		for(int i=1;i<=n;++i){
			a=(a*2)%1000000007;
		}
		a=(a-1)%1000000007;
		printf("Case #%d: %d\n",t1,a);	
	}
	return 0;
}
