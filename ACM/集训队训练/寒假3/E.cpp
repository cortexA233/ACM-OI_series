#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define ll long long
int pre[10000];
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


st g[10000];

int main(){
	int n,m,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&m);
		int ans=0;
		if(!n) break;
		for(int i=0;i<=m;++i) pre[i]=i;
		for(int i=0;i<n;++i){
			scanf("%d%d%d",&g[i].s,&g[i].e,&g[i].l);
		}
		sort(g,g+n,cmp);
		for(int i=0;i<n;++i){
			if(finda(g[i].e)!=finda(g[i].s)){
				ans+=g[i].l;
				join(g[i].s,g[i].e);
			}
		}
		int num=0;
		for(int i=1;i<=m;++i){
			if(i==finda(i)) ++num;
		}
	//	cout<<num<<"!"<<endl;
		if(num==1)
		    cout<<ans<<endl;
		else
		    cout<<"?"<<endl;
	}
	return 0;
}
