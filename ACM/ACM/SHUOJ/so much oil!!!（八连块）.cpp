#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

char a[100][100];
int j[100][100]={0},n,m,sum=0;

void dfs(int x,int y){
	if(x<0||y<0||x>=n||y>=m){
		return;
	}
	if(j[x][y]==1||a[x][y]!='@'){
		return;
	}j[x][y]=1;
	dfs(x-1,y-1);
	dfs(x-1,y);
	dfs(x-1,y+1);
	dfs(x,y-1);
	dfs(x,y+1);
	dfs(x+1,y-1);
	dfs(x+1,y);
	dfs(x+1,y+1);
}

int main(){
	while(cin>>n>>m){
		if(n==0&&m==0)break;
		for(int i=0;i<n;++i){
    		for(int o=0;o<m;++o){
			cin>>a[i][o];
    		}
    	}
    	for(int i=0;i<n;++i){
    		for(int o=0;o<m;++o){
    			if(a[i][o]=='@'&&j[i][o]==0){
    				dfs(i,o);++sum;
    			}
	    	}
    	}
    	cout<<sum<<endl;
    	sum=0;
	}
	return 0;
} 
