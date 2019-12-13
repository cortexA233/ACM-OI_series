#include<iostream>
#include<queue>
#include<stack>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
#define ll long long 

int a[10][10];
int ju[10][10];
int dx[]={1,2,-1,-2,1,2,-1,-2};
int dy[]={2,1,-2,-1,-2,-1,2,1};
int sx,sy,ex,ey;

int getn(char c){
	return c-'a';
}

void bfs(){
	queue<int> qx,qy;
	qx.push(sx);qy.push(sy);
	ju[sx][sy]=0;
	int flag=0;
	while(!qx.empty()&&!qy.empty()){
		int nx=qx.front(),ny=qy.front();
		qx.pop();qy.pop();
		int tx,ty;
		for(int i=0;i<8;++i){
			tx=nx+dx[i];ty=ny+dy[i];
			if(tx<0||ty<0||tx>=8||ty>=8||ju[tx][ty]>=0){
				continue;
			}
			qx.push(tx);qy.push(ty);
			ju[tx][ty]=ju[nx][ny]+1;
			if(tx==ex&&ty==ey){
				flag=1;
				break;
			}
		}
		if(flag) break;
	}
}

int main(){
	string s1,s2;
	while(cin>>s1>>s2){
		for(int i=0;i<8;++i){
			for(int o=0;o<8;++o){
				ju[i][o]=-1;
			}
		}
		sx=getn(s1[0]);sy=s1[1]-'1';
		ex=getn(s2[0]);ey=s2[1]-'1';
		bfs();
        cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<ju[ex][ey]<<" knight moves."<<endl;
	}
	return 0;
}
