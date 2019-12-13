#include<cstdio>
#include<algorithm>
#include<cmath>
#include<iostream>
#define ll long long
using namespace std;
const int M=100000000;

struct st{
	int s,e,l;
};

int cmp(st a,st b){
	return a.l<b.l;
}

int pre[10000];

int finda(int a){
	int x=a;
	while(pre[x]!=x){
		x=pre[x];
	}
	int x1=a;
	while(pre[x1]!=x1){
		x1=pre[x1];
		pre[x1]=x;
	}
	return x;
}

void join(int a,int b){
	int fa=finda(a),fb=finda(b);
	pre[fb]=fa;
	return ;
}

int main(){
	int n,m,q;
	while(scanf("%d%d",&n,&m)){
		if(n==m&&m==0) break;
	    st g[20000];
		for(int i=0;i<m;++i){
			scanf("%d%d%d",&g[i].s,&g[i].e,&g[i].l);
		}
		sort(g,g+m,cmp);
			int ans=100000000,maxn=0,minn,fl,judge=0;
		for(int i=0;i<m;++i){
			fl=0;minn=g[i].l;
			for(int o=1;o<=n;++o){
				pre[o]=o;
			}
			for(int o=i;o<m;++o){
				if(finda(g[o].s)!=finda(g[o].e)){
					join(g[o].s,g[o].e);
				}
				if(finda(u)==finda(v)){
					judge=1;
					maxn=g[o].l;
					fl=1;
					break;
				}
			}
			if(fl) ans=min(ans,maxn-minn);
			if(!fl) break;
		}
		if(judge) printf("%d\n",ans);
		else printf("?\n");
		
	}
	return 0;
}
