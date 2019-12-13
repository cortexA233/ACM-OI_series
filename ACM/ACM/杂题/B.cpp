#include<iostream>
#include<cstring>
#include<queue>
#include<algorithm>
using namespace std;

int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
char a[100][100];
int ans[100][100];
int n,m,judge=0,nx,ny;

void bfs(char c,int sx,int sy){
	queue<int> qx,qy;
	int tx,ty;
	qx.push(sx);qy.push(sy);
	while(qx.size()&&qy.size()){
		nx=qx.front();ny=qy.front();
		for(int i=0;i<4;++i){
			
		}
	}
}

void dfs(int x,int y,int t,char c){
	if(a[x][y]!=c&&ans[x][y]>0) return;
	ans[x][y]=t;
	for(int i=0;i<4;++i){
		nx=x+dx[i];ny=y+dy[i];
		if(nx>=0&&nx<n&&ny>=0&&ny<m&&a[nx][ny]==c){
			if(ans[x][y]>ans[nx][ny]+2&&ans[nx][ny]>=0){
				judge=1;
				return ;
			}
			else{
				if(ans[nx][ny]==-1) dfs(nx,ny,t+1,c);
			}
		}
	}
}

int main(){
	cin>>n>>m;
	for(int i=0;i<n;++i){
		for(int o=0;o<m;++o){
			cin>>a[i][o];
			ans[i][o]=-1;
		}
	}
	for(int i=0;i<n;++i){
		for(int o=0;o<m;++o){
			if(ans[i][o]==-1){
				dfs(i,o,0,a[i][o]);
			}
			if(judge) break;
		}
	}
/*	for(int i=0;i<n;++i){
		for(int o=0;o<m;++o){
			cout<<ans[i][o]<<" ";
		}cout<<endl;
	}
*/
	if(judge) cout<<"Yes";
	else cout<<"No";
	return 0;
}
