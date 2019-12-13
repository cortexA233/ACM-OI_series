#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int t,n,m,sum,pp=0,ss=0;
	short ty=0,a[200009];
	cin>>n>>m; 
	sum=n+m;
	if(n<m){
		t=n;n=m;m=t;
	}
	if(m%2){
		a[0]=0;--m;
	}else{
		a[0]=1;--n;
	}
	for(int i=1;i<sum;++i){
		if(m>0){
			if(ty){
		    	--ty;
	    		a[i]=a[i-1];
	    		if(a[i])--n;
	    		if(!a[i])--m;
	    	}
    		if(!ty){
	    		++ty;
	    		if(a[i-1]){
		    		a[i]=0;--m;
	    		}else{
		    		a[i]=1;--n;
		    	}
	    	}
		}else{
			a[i]=1;--n;
		}
	}
	for(int i=1;i<sum;++i){
	    if(a[i]==a[i-1]){
	    	++pp;
		}else{
			++ss;
		}
	}
	cout<<pp<<" "<<ss;
	return 0;
}
