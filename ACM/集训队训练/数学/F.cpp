#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long

long double logt[1000000+9]={0.0};

int main(){
	ios::sync_with_stdio(false);
	int t;
	for(int i=1;i<=1000009;++i){
		logt[i]=logt[i-1]+log(i);
	}
	scanf("%d",&t);
	int t1=t;
	while(t--){
		ll n,base;
		long double sum=0.0;
		scanf("%lld%lld",&n,&base);
		printf("Case %d: ",t1-t);
		if(n==0||n==1){
			printf("1\n");
			continue;
		}
		sum=logt[n];
		sum/=log(1.0*base);
		ll s1=(ceil)(sum);
		printf("%lld\n",s1);
	}
	return 0;
}
