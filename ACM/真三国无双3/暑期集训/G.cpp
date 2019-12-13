#include<iostream>
#include<cstdio>
using namespace std;

int n,m,t,a[1000009],maxn[1000009],minn[1000009];

int main(){
	cin>>t;
	while(t){
		int s=0;
		for(int i=1;i<n;++i){
			minn[i]=0;maxn[i]=0;
		}
		--t;
		cin>>n;
		cin>>a[0];
		maxn[0]=a[0];
		for(int i=1;i<n;++i){
			scanf("%d",&a[i]);
			if(a[i]>=maxn[i-1]){
				maxn[i]=a[i];
			}else{
				maxn[i]=maxn[i-1];
			}
		}
		minn[n-1]=a[n-1];
		for(int i=n-2;i>=0;--i){
			if(a[i]<=minn[i+1]){
				minn[i]=a[i];
			}else{
				minn[i]=minn[i+1];
			}
		}
		for(int i=1;i<n-1;++i){
			if(minn[i]==a[i]&&maxn[i]==a[i]) ++s;
		}
		cout<<s<<endl;
	} 
	return 0;
}
