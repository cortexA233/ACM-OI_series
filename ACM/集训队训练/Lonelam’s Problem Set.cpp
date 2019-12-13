#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main(){
	int t,n,a[20],t1=0,num1=0,j=1;
	cin>>t;
	while(t1<t){
		j=1;num1=0;
		++t1;
		cin>>n;
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		sort(a,a+n);
		printf("Case #%d: ",t1);
		for(int i=0;i<n-2;++i){
			if(a[i]<=2)++num1;
			if(a[i+1]-a[i]>2){
				j=0;break;
			}
		}
		if(num1!=2)j=0;
		if(j){
			printf("Good Problem Set\n");
		}else{
			printf("Bad Problem Set\n");
		}
	}
	return 0;
}
