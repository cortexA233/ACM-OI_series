#include<iostream>
using namespace std;

int a[30][30],pre[30],j[30]={0},ans;

void dfs(int be,int s,int st){
	if(st>=19){
		if(a[s][be]==1||a[be][s]==1){
			cout<<++ans<<":  "<<be<<" ";
			for(int i=0;i<19;++i){
				cout<<pre[i]<<" ";
		    }
			cout<<be<<endl;
			return ;
		}
		return ;
	}
	for(int i=1;i<=20;++i){
		if(j[i]==0&&(a[s][i]==1||a[i][s]==1)){
			pre[st]=i;
			j[i]=1;
			dfs(be,i,st+1);
			j[i]=0;
		}
	}
} 

int main(){
	int u,v,e,m;
	ios::sync_with_stdio(0);
	for(int i=1;i<=20;++i){
		cin>>u>>v>>e;
		a[i][u]=a[i][v]=a[i][e]=a[u][i]=a[v][i]=a[e][i]=1;
	} 
	while(cin>>m){
		for(int i=0;i<30;++i){
			pre[i]=0;j[i]=0;
		}
		ans=0;
		if(!m) break;
		j[m]=1;
		dfs(m,m,0);
	}
	return 0;
}
