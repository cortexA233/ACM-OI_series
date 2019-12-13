6666#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;

long long s[1000009]={0},k,ans,m,t1=0,t,n,l[1000009];

int main(){
	cin>>t;
	while(t1<t){	
	    ans=0;
    	cin>>n>>m>>k;
    	for(int i=0;i<n;++i){
    		scanf("%lld",&l[i]);
		}
		s[0]=l[0];
		for(int i=1;i<n;++i){
            s[i]=s[i-1]+l[i];
		}
		for(int i=m;i<=n;++i){
			if(i==m){
				if(s[i-1]>=k){
					++ans;
				}
			}else{
				if(s[i-1]-s[i-m-1]>=k)++ans;
			}
		}
		++t1;
		printf("Case #%d: %d\n",t1,ans);	
	}
	return 0;
}
