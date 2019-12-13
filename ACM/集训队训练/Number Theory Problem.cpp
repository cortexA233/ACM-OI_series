#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;

int main(){
	int t1=0,t,n,ans=0;
	cin>>t;
	while(t1<t){
		ans=0;
		++t1;
		cin>>n;
		for(int i=3;i<=n;++i){
			if(i%3==0)++ans;
		}
		printf("Case #%d: %d\n",t1,ans);
	}
	return 0;
}
