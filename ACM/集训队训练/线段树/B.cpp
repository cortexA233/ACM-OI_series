#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<string>
using namespace std;
#define ll long long 

int a[50009],f[100009];

int lson(int x){
	return x<<1;
}
int rson(int x){
	return (x<<1)|1;
}

void pushup(int x){
	f[x]=max(f[lson(x)],f[(rson(x))]);
}

void build(int p,int l,int r){
	if(l==r){
		f[p]=a[l];
		return ;
	}
	int mid=(l+r)>>1;
	build(lson(p),l,mid);
	build(rson(p),mid+1,r);
	pushup(p);
}

void upd(int poi,int v,int p,int l,int r){
	if(l==r){
		f[p]=v;
		return ;
	}
	int mid=(l+r)>>1;
	if(poi<=mid){
		upd(poi,v,lson(p),l,mid);
	}
	if(poi>mid){
		upd(poi,v,rson(p),mid+1,r);
	}
	pushup(p);
}

int que(int l,int r,int cl,int cr,int p){
	if(l<=cl&&r>=cr){
		return f[p];
	}
	int mid=(cl+cr)>>1;
	int ans=0;
	if(l<=mid){
		ans=max(ans,que(l,r,cl,mid,lson(p)));
	}
	if(r>mid){
		ans=max(ans,que(l,r,mid+1,cr,rson(p)));
	}
	return ans;
}

int main(){
	int n,m;
	cin.tie(0);
	while(~scanf("%d%d",&n,&m)){
	//	memset(f,0,sizeof(f));
		for(int i=1;i<=n;++i){
			scanf("%d",&a[i]);
		}
		build(1,1,n);
		char caozuo;
		int x,y;
		while(m--){
			getchar();
			caozuo=getchar();
			scanf("%d%d",&x,&y);
			if(caozuo=='Q'){
				printf("%d\n",que(x,y,1,n,1));
			}
			if(caozuo=='U'){
				upd(x,y,1,1,n);		
			}
		}	
	}
	return 0;
}
