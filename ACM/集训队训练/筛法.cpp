#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main(){
	int maxn=0,ans,ans2,n[100009]={0};n[3]=0;
	short a[200009]={0};a[1]=1;//0表示 是素数 
	for(int i=2;i<=100000;i=i+1){
		if(!a[i]){
			for(int o=2*i;o<=100000;o=o+i){
				a[o]=1;
			}
			if(!a[i]&&!a[(i+1)/2]){
				++maxn;
			}
		}
		n[i]=maxn;
	}
	int t,l,m;
	scanf("%d",&t);
	for(int i=0;i<t;++i){
		scanf("%d%d",&l,&m);
		cout<<n[m]-n[l-1]<<endl;
	}
	return 0;
}
