#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
using namespace std;

//ตÝน้ 
int fac(int a){
	if(a==1)return 1;
	return a*fac(a-1);
}

int main(){
	int s;int ans=1;
	cin>>s;
	for(int i=s;i>1;--i){
		ans*=i;
	}
	cout<<ans<<" "<<fac(s)<<endl;
	ans=1;cout<<ans<<endl;
	while(s>0){
	    ans*=s;--s; 
	} 
	cout<<ans;
	return 0;
}
