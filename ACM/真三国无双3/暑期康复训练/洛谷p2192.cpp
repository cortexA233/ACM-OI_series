#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int n,a[10000],t,num[10]={0};
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a[i];++num[a[i]];
	}
	if(num[5]>=9&&num[0]>=0)printf("5555555550");
	else printf("-1");
	return 0;
} 
