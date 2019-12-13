#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;

struct st{
	int s,e,id;
	friend int operator <(st a,st b){
		if(a.e==b.e) return a.s<b.s;
		else return a.e>b.e;
	}
};

int f[100009],n;
int ans[100009];

int lowb(int x){
	return x&-x;
}

void upd(int x,int v){
	while(x<=n){
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
	st a[100009];
	while(scanf("%d",&n)){
		if(!n) break;
		memset(f,0,sizeof(f));
		memset(ans,0,sizeof(ans));
		for(int i=1;i<=n;++i){
			scanf("%d%d",&a[i].s,&a[i].e);
			a[i].id=i;
		}
		memset(f,0,sizeof(f));
		sort(a+1,a+1+n);
		ans[a[1].id]=0;
		upd(a[1].s+1,1);
		for(int i=2;i<=n;++i){
			if(a[i].e==a[i-1].e&&a[i].s==a[i-1].s){
				ans[a[i].id]=ans[a[i-1].id];
			}else{
				ans[a[i].id]=que(a[i].s+1);
			}
			upd(a[i].s+1,1);
		}
		printf("%d",ans[1]);
        for(int i=2;i<=n;i++){
        	printf(" %d",ans[i]);
		}
        printf("\n");
	} 
	return 0;
}
