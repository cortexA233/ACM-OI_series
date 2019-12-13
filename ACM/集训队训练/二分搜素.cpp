#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;

int a[100],n,k,t;
//递归实现 
int s1(int ke,int be,int en){
	t=(be+en)/2;
	if(a[t]==ke)return 1;
	if(be>=en&&ke!=a[be])return 0;
	if(ke>a[t]){
		s1(ke,t+1,en);
	}else if(ke<a[t]){
		s1(ke,be,t-1);
	}
}
//非递归实现 
int s2(int ke,int be,int en){
	while(be<en){
		t=(be+en)/2;
		if(a[t]=ke)return 1;
		if(a[t]>ke)be=t+1;
		if(a[t]<ke)en=t-1;
	}
	return 0;
} 

int main(){
	cin>>n>>k;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	sort(a,a+n);
	cout<<s1(k,0,n-1)<<" "<<s2(k,0,n-1);
	return 0;
}
