#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;

int k,ans,t1=0,t,n,a[100009];

/*int se(int temp,int be,int en){
	int j=(be+en)/2;
	while(be<en){
		if(temp>a[j])be=j+1;
		if(temp<a[j])en=j-1;
		if(temp==a[j])return 1;
	}
	return 0;
}*/

int main(){
	cin>>t;
	while(t1<t){	
	    ans=0;
	    cin>>n;
	    for(int i=0;i<n;++i){
	    	cin>>a[i];
		}
	//	sort(a,a+n);
	/*	for(int i=0;i<n;++i){
			
		}*/
	//	cout<<se(t,0,n-1);
		++t1;
	//	printf("Case #%d: %d\n",t1,ans);	
	}
	return 0;
}

