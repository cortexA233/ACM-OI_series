#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<string>
#include<cstring>
using namespace std;


int n,m,bx,by,ex,ey;
char a[100][100];
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
int d[100][100];

int bfs(){
	queue<int> qx;queue<int> qy;
	for(int i=0;i<n;++i){
		for(int o=0;o<m;++o){
			d[i][o]=-1;
		}
	}
	
	d[bx][by]=0;
	qx.push(bx);qy.push(by);
	
	while(qx.size()&&qy.size()){
		int tx=qx.front(),ty=qy.front();
		qx.pop();qy.pop();
		if(tx==ex&&ty==ey)
			break;
		
		for(int i=0;i<4;++i){
			int nx=tx+dx[i],ny=ty+dy[i];
			if(d[nx][ny]==-1&&a[nx][ny]!='#'&&0<=nx&&nx<n&&0<=ny&&ny<m){
				qx.push(nx);qy.push(ny);
				d[nx][ny]=d[tx][ty]+1;
			}
		}
	}
	return d[ex][ey];
}

int main(){
	cin>>n>>m;
	for(int i=0;i<n;++i){
		for(int o=0;o<n;++o){
			cin>>a[i][o];
		}
	}
	for(int i=0;i<n;++i){
		for(int o=0;o<m;++o){
			if(a[i][o]=='s'){
				bx=i;by=o;
			}
			if(a[i][o]=='e'){
				ex=i;ey=o;
			}
		}
	}
	cout<<bfs();
	
	for(int i=0;i<n;++i){
		cout<<endl;
		for(int o=0;o<m;++o){
		    cout<<d[i][o]<<" ";
		}
	}
	
	return 0;
}
