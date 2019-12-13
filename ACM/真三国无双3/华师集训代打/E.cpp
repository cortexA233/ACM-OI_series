#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;
#define ll long long

int f[100009],n;

int lowb(int x){
	return x&-x;
}

void upd(int x,int v){
	while(x<=100009){
		f[x]+=v;
		x+=lowb(x);
	}
}

int que(int x){
	int s=0;
	while(x>0){
		s+=f[x];
		x-=lowb(x);
	}
	return s;
}

int main(){
	int a[100009];
	scanf("%d",&n);
	memset(f,0,sizeof(f));
	ll sum=0;
	int ans[100009]={0};
	for(int i=1;i<=n;++i){
		scanf("%d",&a[i]);
	}//scanf("%d",&a[1]);
//	for(int i=1;i<=n;++i) printf("%d ",a[i]);
//	printf("\n");
	for(int i=1;i<=n;++i){
		upd(a[i],1);
		sum+=i-que(a[i]);
	}
	if(sum>2) printf("%I64d",sum-2);
	else printf("0");
	return 0;
}
