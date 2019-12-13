#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;

int k,ans,t1=0,t,n,a[100009];

int se(int temp,int be,int en){
	int j;
	while(be<=en){
	    j=(be+en)/2; 
		if(temp==a[j])return 1;
		if(temp>a[j])be=j+1;
		if(temp<a[j])en=j-1; 
	}
	return 0;
}

int main(){
	cin>>t;
	while(t1<t){	
	    ans=0;
	    cin>>n;
	    for(int i=0;i<n;++i){
	    	cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;++i){
		    for(int o=0;o<n;++o){
		    	k=a[i]-a[o];
		    	if(se(k,0,n-1))++ans;
			}	
		}
		++t1;
		printf("Case #%d: %d\n",t1,ans);	
	}
	return 0;
}

