#include<bits/stdc++.h>
using namespace std;
#define ll long long 



int main(){
	int n,m,t,b[10009];
	double a[10009];
	scanf("%d",&t);
	while(t--){
		int dn=0;
		double sum=0;
		scanf("%d%d",&n,&m);
		for(int i=0;i<n;++i){
			scanf("%lf%d",&a[i],&b[i]);
			if(b[i])++dn;
			sum+=a[i];
		}
		dn=min(dn,m);
		sort(a,a+n);
		for(int i=1;i<=dn;++i){
			sum-=a[n-i]/2;
		} 
		printf("%.1lf\n",sum);
	}
	
	return 0;
} 
