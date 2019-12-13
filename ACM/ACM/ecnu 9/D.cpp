#include<bits/stdc++.h>
using namespace std;

int isp(int a){
	int lim=sqrt(a);
	for(int i=2;i<=lim;++i){
		if(a%i==0) return 0;
	}
	return 1;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int a[100009];
	int n;
	cin>>n;
	
	
	int fl=1,kong=0;
	a[0]=0;a[n+1]=0;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		if(!a[i]) kong=1;
	}
	if(n>=4){
		cout<<"Impossible";
		return 0;
	}
	if(!kong){
		for(int i=1;i<=n;++i){
			cout<<a[i]<<" ";
		}return 0;
	}
		if(n==3){
			if(!isp(a[2]+2)) fl=0;
			
			if(a[1]!=2&&a[1]) fl=0;
			
			if(a[n]!=2&&a[n]) fl=0;
			
			if(!a[1]) a[1]=2;
			
			if(!a[n]) a[n]=2;
			
		//	if(fl) a[2]=3;
		    if(!a[2]) a[2]=3;
		}
		if(n==2){
			if(isp(a[1]+a[2])&&isp(a[1])&&isp(a[2])){
				fl=1;
			}
			if(a[1]==2&&!a[2]) a[2]=3;
			if(a[2]==2&&!a[1]) a[1]=3;
			if(a[1]==2&&!a[2]) a[2]=3;
			if(a[2]==2&&!a[1]) a[1]=3;
			if(!isp(a[1]+2)||!isp(a[2]+2)) fl=0;
		}
	    if(n==1){
	    	if(!isp(a[1])) fl=0;
	    	if(!a[1]) a[1]=3;
		}
	if(fl){
		for(int i=1;i<=n;++i){
			cout<<a[i]<<" ";
		}return 0;
	}
	cout<<"Impossible";
	return 0;
} 
