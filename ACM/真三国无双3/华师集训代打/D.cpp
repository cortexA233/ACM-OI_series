#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n,m,a1,b1;
char a[510][509];
int dx[]={1,0,-1,0},dy[]={0,1,0,-1};
ll r[509][509];

void bfs(){
	queue<int> qx,qy,qzt;
	qx.push(1);qy.push(1);qzt.push(0);
	r[1][1]=0;
	int nx,ny,ty,tx,nzt;
	int fl=0;//0表示城镇进荒野，1表示荒野进城镇 
	while(!qx.empty()&&!qy.empty()){
		nx=qx.front(),ny=qy.front();nzt=qzt.front();
		qx.pop();qy.pop();qzt.pop();
		if(nx==n&&ny==m) break;
		for(int i=0;i<4;++i){
			tx=nx+dx[i];ty=ny+dy[i];
			if(tx>n||ty>m||tx<1||ty<1||a[tx][ty]=='#'||r[tx][ty]!=-1) continue;
			if(nzt==0){
				qx.push(tx);qy.push(ty);qzt.push(1);
				r[tx][ty]=r[nx][ny]+b1;
			}
			if(nzt==1){
				qx.push(tx);qy.push(ty);qzt.push(0);
				r[tx][ty]=r[nx][ny]+a1;
			}
		}
	} 
}

int main(){
	ios::sync_with_stdio(false);
	cin>>m>>n>>a1>>b1;
	for(int i=0;i<=m+1;++i){
	    a[0][i]='#';a[n+1][i]='#';	
	}
	for(int i=0;i<=n+1;++i){
		a[i][0]='#';a[i][m+1]='#';
	}
	char com;
	for(int i=1;i<=n;++i){
		for(int o=1;o<=m;++o){
			cin>>a[i][o];
			r[i][o]=-1;
		}
	}
/*	for(int i=0;i<=n+1;++i){
		for(int o=0;o<=m+1;++o){
			cout<<a[i][o];
		}cout<<endl;
	}*/
	bfs();
	if(r[n][m]<0) cout<<"IMPOSSIBLE"; 
	else cout<<r[n][m];
	return 0;
}
