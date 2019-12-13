#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int n,m,a[10]={0},t;
	scanf("%d%d",&n,&m);
	for(int i=n;i<=m;++i){
		t=i;
		while(t>=1){
			++a[t%10];t/=10;
		}
	}
	for(int i=0;i<10;++i){
		printf("%d ",a[i]);
	}
	return 0;
} 
