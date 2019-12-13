#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring> 
#include<queue>
using namespace std;

char a[35][35][35];
int lu[35][35][35];
int dx[]={0,1,0,-1,0,0},dy[]={1,0,-1,0,0,0},dz[]={0,0,0,0,-1,1};
int l,r,c,sx,sy,sz,ex,ey,ez;

void bfs(){
	queue<int> qx,qy,qz;
	int nx,ny,nz,tx,ty,tz;
	qx.push(sx);qy.push(sy);qz.push(sz);
	while(qx.size()&&qy.size(),qz.size()){
		nx=qx.front();ny=qy.front();nz=qz.front();
		qx.pop();qy.pop();qz.pop();
		for(int i=0;i<6;++i){
			tx=nx+dx[i];ty=ny+dy[i];tz=nz+dz[i];
			if(tz>=0&&tz<l&&tx>=0&&tx<r&&ty>=0&&ty<c&&lu[tx][ty][tz]==-1&&(a[tx][ty][tz]=='.'||a[tx][ty][tz]=='E')){
				lu[tx][ty][tz]=lu[nx][ny][nz]+1;
			//	cout<<tx<<ty<<tz<<endl;
				qx.push(tx);qy.push(ty);qz.push(tz);
			}
		}
	}
}

int main(){
	while(cin>>l>>r>>c){
	//	getchar();
	    if(l==r&&r==c&&!c) break;
		for(int i=0;i<l;++i){
			for(int o=0;o<r;++o){
				for(int p=0;p<c;++p){
					cin>>a[o][p][i];lu[o][p][i]=-1;
					if(a[o][p][i]=='S'){
						sx=o;sy=p;sz=i;lu[o][p][i]=0;
					}
					if(a[o][p][i]=='E'){
						ex=o;ey=p;ez=i;
					}
				}
			}
	//		getchar();
		}
		
		bfs();
	/*	for(int i=0;i<l;++i){
			for(int o=0;o<r;++o){
				for(int p=0;p<c;++p){
					cout<<lu[o][p][i];
				}cout<<endl;
			}
			cout<<endl;
		}*/
		if(lu[ex][ey][ez]==-1){
			cout<<"Trapped!"<<endl;
		}else{
			printf("Escaped in %d minute(s).\n",lu[ex][ey][ez]);
		}
	}
	return 0;
}
