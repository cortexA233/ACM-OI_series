#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;

char a[100][100];int t=0,ans=0,n,m,j[100][100]={0};

void dfs(int x,int y){
	j[x][y]=1;
	if(j[x][y]||a[x][y]!='*'||x>=n||y>=m|x<0||y<0){
        return;
	}	
	for(int i=-1;i<=1;++i){
		for(int o=-1;o<=1;++o){
			dfs(x+i,y+o);
		}
	}
}

int main(){
	cin>>n>>m;
	for(int i=0;i<n;++i){
		for(int o=0;o<m;++o){
			cin>>a[i][o];
		}
	}
	for(int i=0;i<n;++i){
		for(int o=0;o<m;++o){
			if(a[i][o]='*'&&!j[i][o]){
				dfs(i,o);++ans;
			}
		}
	}
	cout<<ans;
	return 0;
}
