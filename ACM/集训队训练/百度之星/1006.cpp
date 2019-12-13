#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int M=100000000;

struct st{
	int s,e,l,id;
	char co;
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
	int T;
	scanf("%d",&T);
	int T1=T;
	int n,m,q;
	while(T--){
	    st g[20000];
	    scanf("%d%d",&n,&m);
		for(int i=0;i<m;++i){
		//	scanf("%d%d%d%c",&g[i].s,&g[i].e,&g[i].l,&g[i].co);
		//    getchar();
		    cin>>g[i].s>>g[i].e>>g[i].l>>g[i].co;
		}
		vector<st> rg,bg;
		sort(g,g+m,cmp);
	/*	
		cout<<endl;
		for(int i=0;i<m;++i) cout<<g[i].s<<" ";cout<<endl;
		for(int i=0;i<m;++i) cout<<g[i].e<<" ";cout<<endl;
		for(int i=0;i<m;++i) cout<<g[i].l<<" ";cout<<endl;
		for(int i=0;i<m;++i) cout<<g[i].co<<" ";cout<<endl;
	*/	
		for(int i=0;i<m;++i){
			g[i].id=i;
			if(g[i].co=='R'||g[i].co=='G'){
				rg.push_back(g[i]);
			}
			if(g[i].co=='B'||g[i].co=='G'){
				bg.push_back(g[i]);
			}
		}
		int kuai=0,flag=1,sum1=0,sum2=0,m1=rg.size(),m2=bg.size(),mar1[103]={0},mar2[103]={0};
		for(int o=1;o<=n;++o) pre[o]=o;
		for(int o=0;o<m1;++o){
			if(finda(rg[o].s)!=finda(rg[o].e)){
				join(rg[o].s,rg[o].e);
				sum1+=rg[o].l;
				mar1[rg[o].id]=1;
			}
		}
		for(int o=1;o<=n;++o){
			if(finda(o)==o) ++kuai;
		}
		if(kuai!=1) sum1=M;
		kuai=0;
	//	for(int i=0;i<m;++i) cout<<mar1[i]<<" ";cout<<endl;
		
		for(int o=1;o<=n;++o) pre[o]=o;
		for(int o=0;o<m2;++o){
			if(finda(bg[o].s)!=finda(bg[o].e)){
				join(bg[o].s,bg[o].e);
				sum2+=bg[o].l;
				mar2[bg[o].id]=1;
			}
		}
		for(int o=1;o<=n;++o){
			if(finda(o)==o) ++kuai;
		}
		if(kuai!=1) sum1=M;
	//	for(int i=0;i<m;++i) cout<<mar2[i]<<" ";cout<<endl;
		if(sum1==M&&sum2==M) flag=0;
		else{
			if(sum1>sum2){
				sum1=sum2;
				for(int i=0;i<m;++i){
					mar1[i]=mar2[i];
				}
			}
		}
		printf("Case #%d:\n",T1-T);
		for(int i=1;i<=m;++i){
			if(!flag){
				printf("-1\n");
				continue;
			}
			if(i<n-1){
				printf("-1\n");
				continue;
			}
			if(i==n-1){
				printf("%d\n",sum1);
				continue;
			}
			int sum3=0,sum4=0,num=i-n+1;
		//	printf("%d ",num);
			for(int o=0;o<m;++o){
				if(!num) break;
				if(!mar1[o]){
					sum3+=g[o].l;
					--num;
				}
			}
			printf("%d\n",sum1+sum3);
		}
	}
	return 0;
}

/*
1
5 8
1 5 1 B
2 1 2 B
5 4 5 B
4 5 3 G
1 3 3 G
4 3 5 G
5 4 1 R
1 2 2 R
*/
