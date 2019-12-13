#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;

int t;
int vis[1000009];
long long n;
long long a[100009],b[100009];
long long d[1000009]={0};

int main(){
	
	cin>>t;
	while(t){
		scanf("%lld",&n);
		for(long long i=0;i<=1000000;++i) d[i]=0;
		for(long long i=0;i<n;++i){
			scanf("%lld",&a[i]);
			vis[a[i]]=t;
		}
		sort(a,a+n);
		long long num=1; 
		b[0]=a[0];
		for(long long i=1;i<n;++i){
			if(a[i]!=a[i-1]){
				b[num]=a[i];
				++num;
			}
		}
//		for(long long i=0;i<num;++i) cout<<b[i]<<" ";cout<<endl;
		for(long long i=0;i<num;++i){
			for(long long j=b[i];j<=b[num-1];j+=b[i]){
				if(vis[j]==t&&!d[j]){
					d[j]=b[i];
				}
			}
		}
		long long ans=0;
		for(long long i=0;i<n;++i){
			ans+=d[a[i]];
		}
		cout<<ans<<endl;
		--t;
	}
	return 0;
}
