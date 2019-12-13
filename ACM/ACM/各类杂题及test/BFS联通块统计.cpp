#include<iostream>
#include<string>
#include<queue>
#include<cstring>
#include<algorithm>
using namespace std;

char a[100][100];
int dx[]={1,0,-1,0},dy[]={0,1,0,-1},n,m,ans=1,j[100][100];
queue<int> qx,qy;

int bfs(int x,int y){
	if(a[x][y]=='.'){
		qx.push(x);qy.push(y);
		j[x][y]=ans;
	}
	while(qx.size()&&qy.size()){
		int tx=qx.front(),ty=qy.front();
		qx.pop();qy.pop();
		for(int i=0;i<4;++i){
			int nx=tx+dx[i],ny=ty+dy[i];
			if(!j[nx][ny]&&nx>=0&&ny>=0&&nx<n&&ny<m&&a[nx][ny]=='.'){
				qx.push(nx);qy.push(ny);
				j[nx][ny]=ans;
			} 
		}
	}
	++ans;
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
			j[i][o]=0;
		}
	}
	for(int i=0;i<n;++i){
		for(int o=0;o<m;++o){
			if(!j[i][o])bfs(i,o);
		}
	}
	int sum[100000];
	for(int i=0;i<n*m;++i){
		sum[i]=0;
	}
	int maxn=0;
	for(int i=0;i<n;++i){
		for(int o=0;o<m;++o){
			++sum[j[i][o]];
		}
	}
	for(int i=1;i<=ans;++i){
		if(sum[i]>maxn)maxn=sum[i];
	}
	cout<<maxn;
	return 0;
}
