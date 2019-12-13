#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define ll long long
int pre[300000];
struct st{
	int s,e,l;
};

int cmp(st a,st b){
	return a.l<b.l;
}

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


st g[300000];

int main(){
	int n,m,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		m=0;
		int le;
		for(int i=0;i<n;++i){
			for(int o=0;o<n;++o){
				scanf("%d",&le);
				if(i==o) continue;
				g[m].s=i+1;
				g[m].e=o+1;
				g[m].l=le;
				++m;
			}
		}
		int ans=0;
		if(!n) break;
		for(int i=0;i<=n;++i) pre[i]=i;
		sort(g,g+m,cmp);
		for(int i=0;i<m;++i){
			if(finda(g[i].e)!=finda(g[i].s)){
				ans=g[i].l;
				join(g[i].s,g[i].e);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
