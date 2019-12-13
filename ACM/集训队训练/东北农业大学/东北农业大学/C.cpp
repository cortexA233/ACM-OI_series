#include<iostream>
#include<cstring>
#include<algorithm>
#include<string>
#include<queue>
#include<cstdio>
using namespace std;

int bu,b[510][510],m,n,t,sx,sy,ex,ey,dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
char a[510][510];

void bfs(){
	queue<int> qx,qy;
	int nx,tx,ny,ty;
	qx.push(sx);qy.push(sy);
	while(qx.size()&&qy.size()){
		++bu;
		tx=qx.front();ty=qy.front();
		qx.pop();qy.pop();
		for(int i=0;i<4;++i){
			nx=tx+dx[i];ny=ty+dy[i];
			if((a[nx][ny]=='.'||a[nx][ny]=='t')&&nx<n&&ny<m&&nx>=0&&ny>=0&&b[nx][ny]==-1){
				qx.push(nx);qy.push(ny);
				b[nx][ny]=1;
				if(a[nx][ny]=='t')return;
			}
		}
	}
}

int main(){
	cin>>t;
	while(t){
		bu=0;
		--t;
		cin>>n>>m;
		for(int i=0;i<n;++i){
			for(int o=0;o<m;++o){
				cin>>a[i][o];
				b[i][o]=-1;
				if(a[i][o]=='s'){
					b[i][o]=1;sx=i;sy=o;
				}
				if(a[i][o]=='t'){
					ex=i;ey=o;
				}
			}
		}
//		cout<<sx<<" "<<sy<<endl;
//		cout<<ex<<" "<<ey<<endl;
		bfs();
/*		for(int i=0;i<n;++i){
			for(int o=0;o<m;++o){
				cout<<a[i][o];
			}
			cout<<endl;
		}*/
//		cout<<bu<<" ";
		if(b[ex][ey]==-1){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
