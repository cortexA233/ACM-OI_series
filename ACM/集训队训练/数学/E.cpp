#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e6+5;
bool isb[N];
bool is[N];
int cnt = 0;
int sum=0;

void getp(ll a,ll b){
	memset(isb,1,sizeof(isb));
	memset(is,1,sizeof(is));
	isb[1]=0;
	for(ll i=2;i*i<=b;++i){
		if(isb[i]){
			for(ll o=i*2;o*o<=b;o+=i){
				isb[o]=0;
			}
			for(ll o=max((ll)2,(a+i-1)/i)*i;o<=b;o+=i){
				is[o-a]=0;
			}
		}
	}
	if(a<=1)is[1-a]=0;
	for(ll i=a;i<=b;++i){
		if(is[i-a]){
			++sum;
		} 
	}
}

int main(){
	getp(1,1e6);
	getp(2,1e6);
	getp(3,1e6);
	getp(4,1e6);
	getp(5,1e6);
/*	int t;
	scanf("%d",&t);
	int t1=t;
	while(t--){
		ll a,b;
		cnt=0;
		scanf("%lld%lld",&a,&b);
	    sum=0;
		getp(a,b);
		printf("Case %d: %d\n",t1-t,sum);
	} */
	return 0;
}
