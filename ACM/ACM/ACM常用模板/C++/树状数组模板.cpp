#include<iostream>
#include<algorithm>
#include<string>
#include<cstdio>
using namespace std;

int m,n,a[10000],c[10000],s[10000];

int lowb(int x){
	return x&-x;
}
void change(int p,int v){
	for(int i=p;i<=n;i+=lowb(i)){
		c[i]+=v;
	}
} 

int sum(int x){
	int ans=0;
	while(x>0){
        ans+=c[x];
		x=x-lowb(x);
	}
	return ans;
} 

int main(){
	cin>>n>>m;
	int f,x,y;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}s[0]=a[0];
	for(int i=1;i<n;++i){
		s[i]=s[i-1]+a[i];
	}
	for(int i=1;i<=n;++i){
		cout<<s[i]<<" ";
	}cout<<endl;
	for(int i=1;i<=n;++i){
	    c[i]=s[i]-s[i-lowb(i+1)];
    }
    for(int i=1;i<=n;++i){
		cout<<c[i]<<" ";
	}cout<<endl;
	while(m){
		--m;
	    for(int i=1;i<n;++i){
	    	s[i]=0;
    	}
    	cin>>f>>x>>y;
    	cout<<sum(y)-sum(x)+a[x]<<endl;
	}
/*	for(int i=0;i<n;++i){
		cout<<c[i]<<" ";
	}cout<<endl;*/
	for(int i=0;i<n;++i){
		cout<<s[i]<<" ";
	}
	change(2,4);
	return 0;
}
