#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n,c;
int a[1000009],b[1000009];
ll af[1000009],bf[1000009],as[1000009],bs[1000009],cf[1000009],cs[1000009];
ll c[1000009];

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		ll sum1=0,sum2=0;
		for(int i=0;i<n;++i){
			scanf("%d",&a[i]);
			sum1+=a[i];
		}
		for(int i=0;i<n;++i){
			scanf("%d",&b[i]);
			c[i]=a[i]-b[i];
			sum2+=b[i];
		}
		if(sum1<sum2){
			printf("-1\n");
			continue;
		}
		cf[0]=c[0];cs[n-1]=c[n-1];af[0]=a[0];as[n-1]=a[n-1];bf[0]=b[0];bf[n-1]=b[n-1];
		for(int i=1;i<n;++i){
			af[i]=a[i]+af[i-1];
			bf[i]=b[i]+bf[i-1];
			cf[i]=c[i]+cf[i-1];
		}
		for(int i=n-2;i>=0;--i){
			as[i]=a[i]+as[i+1];
			bs[i]=b[i]+bs[i+1];
			cs[i]=c[i]+cs[i+1];
		}
	}
	return 0;
}
