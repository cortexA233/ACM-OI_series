#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;

int n,m,u,v,a[60][60],j=0,ju[60][60]={0};

void dfs(int s){
	if(s==n)j=1;
	for(int i=1;i<=n;++i){
		if(a[s][i]&&!ju[s][i]){
			ju[s][i]=1;
			dfs(i);
		}
	}
}

int main(){
	while(cin>>n>>m){
		for(int i=1;i<=n;++i){
			for(int o=0;o<=n;++o){
				a[i][o]=0;
			}
		}
		for(int i=0;i<m;++i){
			cin>>u>>v;
			a[u][v]=1;
		}
		dfs(1);
		if(j){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
		j=0;
	}
	return 0;
}
