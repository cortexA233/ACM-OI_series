#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll s,m,k,t,n,a[10009],t1;
	scanf("%lld",&t);t1=t;
	while(t--){
		scanf("%lld%lld%lld%lld",&n,&s,&m,&k);
		int maxi=0;
		for(int i=0;i<n;++i){
			scanf("%lld",&a[i]);
			if(a[i]>a[maxi]){
				maxi=i;
			}
		}
		ll vd[10009]={0},len=1;
		vd[1]=a[maxi];
		for(int i=(maxi+k)%n;i!=maxi;i=(i+k)%n){
			vd[++len]=vd[len-1]+a[i];
		}
		/*
		for(int i=1;i<=len;++i){
			cout<<vd[i]<<" ";
		}cout<<"!"<<endl;
		*/
		ll maxvd=vd[1],maxvdi=1;
		for(int i=2;i<=len;++i){
			if(vd[i]>maxvd){
				maxvd=vd[i];
				maxvdi=i;
			}
		}
		ll ans;
		if(vd[len]<=0||m<=len){
			ans=maxvd;
		}else{
			ll tnum=m/len,tyu=m%len;
			ans=maxvd+(tnum-1)*vd[len];
			for(int i=1;i<=tyu;++i){
				ans=max(ans,tnum*vd[len]+vd[i]);
			}
		}/*
		if(ans<0) printf("Case #%lld: %lld\n",t1-t,s);
		else*/ printf("Case #%lld: %lld\n",t1-t,((s-ans>0)?(s-ans):0));
	}
	return 0;
}
/*
2 
3 10 5 2 
3 2 1 
5 20 6 3 
2 3 2 1 5
*/
