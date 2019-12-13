#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;

int dp(int i,int j){
	if()
}

int main(){
	int n,m,a[20],t,ans=0;
	while(cin>>n>>m){
		t=m;
	    for(int i=0;i<n;++i){
	    	cin>>a[i];
    	}
		sort(a,a+n);
    	a[n]=0;
    	for(int i=0;i<n;++i){
    		t=t-a[i];
    		if(t<=0||t-a[i+1]<=0){
    			t=m;
    			++ans;
			}
		}
		cout<<ans;
	}
	return 0;
}
