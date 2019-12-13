#include<bits/stdc++.h>
using namespace std;

int n,m,sx,sy;
int ma[109][109]={0};

void dfs(int x,int y,int num){
	ma[x][y]=1;
	if(num>=n*m-1) return ;
	for(int i=x+1;i<=n;++i){
		if(ma[i][y]==0){
			cout<<i<<" "<<y<<endl;
			dfs(i,y,num+1);
		}
	}
	for(int i=x-1;i>=1;--i){
		if(ma[i][y]==0){
			cout<<i<<" "<<y<<endl;
			dfs(i,y,num+1);
		}
	}
	for(int i=y+1;i<=m;++i){
		if(ma[x][i]==0){
			cout<<x<<" "<<i<<endl;
			dfs(x,i,num+1);
		}
	}
	for(int i=y-1;i>=1;--i){
		if(ma[x][i]==0){
			cout<<x<<" "<<i<<endl;
			dfs(x,i,num+1);
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m>>sx>>sy;
//	cout<<sx<<" "<<sy<<endl;
	dfs(sx,sy,0);
	return 0;
} 
