#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;

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
	while(scanf("%d",&n)){
		if(!n) break;
		memset(f,0,sizeof(f));
		int sum=0;
		int ans[100009]={0};
		for(int i=1;i<=n;++i){
			scanf("%d",&a[i]);
		}
		printf("\n");
		for(int i=1;i<=n;++i){
			printf("%d ",a[i]);
		}printf("\n");
		for(int i=1;i<=n;++i){
			upd(a[i],1);
			sum+=i-que(a[i]);
		//	ans[a[i].id]=i-que(a[i].e);
		//	ans[i]=i-que(a[i].e);
		}
		for(int i=1;i<=n;++i){
			printf("%d ",ans[i]);
		}printf("\n%d\n",sum);
	} 
	return 0;
}
