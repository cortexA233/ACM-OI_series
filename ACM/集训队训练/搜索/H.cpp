#include<iostream>
#include<queue>
#include<stack>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
#define ll long long 

char a[1005][1005];
int ju[1005][1005];
int dx[]={1,0,-1,0},dy[]={0,1,0,-1};
int fi[1000][1000];
int sx,sy;
int n,m;

void bff(int fx,int fy){
	queue<int> qx,qy;
	qx.push(fx);qy.push(fy);
	fi[fx][fy]=0;
	while(!qx.empty()&&!qy.empty()){
		int nx=qx.front(),ny=qy.front();
		qx.pop();qy.pop();
		int tx,ty;
		for(int i=0;i<4;++i){
			tx=nx+dx[i];ty=ny+dy[i];
			if(tx<0||ty<0||tx>=n||ty>=m||(a[tx][ty]!='.'&&a[tx][ty]!='J')){
				continue;
			}
			if(fi[tx][ty]>fi[nx][ny]+1||fi[tx][ty]==-1){
				fi[tx][ty]=fi[nx][ny]+1;
				qx.push(tx);qy.push(ty);
			}
		}
	}
}

void bfs(){
	queue<int> qx,qy;
	qx.push(sx);qy.push(sy);
	ju[sx][sy]=0;
	int flag=0;
	int nx,ny,tx,ty;
	while(!qx.empty()&&!qy.empty()){
		nx=qx.front(),ny=qy.front();
		qx.pop();qy.pop();
		for(int i=0;i<4;++i){
			tx=nx+dx[i];ty=ny+dy[i];
			if(tx<0||ty<0||tx>=n||ty>=m||a[tx][ty]=='#'||a[tx][ty]=='F'||ju[tx][ty]>=0){
				continue;
			}
			if(ju[nx][ny]+1>=fi[tx][ty]) continue;
			qx.push(tx);qy.push(ty);
			ju[tx][ty]=ju[nx][ny]+1;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t){
		--t;
		sx=0;sy=0;
		scanf("%d%d",&n,&m);
		for(int i=0;i<n;++i){
			getchar();
	    	for(int o=0;o<m;++o){
    			scanf("%c",&a[i][o]);
    			fi[i][o]=-1;
    			ju[i][o]=-1;
    		}
    	}
    	for(int i=0;i<n;++i){
	    	for(int o=0;o<m;++o){
	    		if(a[i][o]=='J'){
	    			sx=i;sy=o;
				}
    			if(a[i][o]=='F'){
    				bff(i,o);
    			//	cout<<i<<" "<<o<<endl;
				}
    		}
    	}
		bfs();
    	int flag=0;
    	int ans=111111111;
    	for(int i=0;i<n;++i){
    	//	cout<<ju[i][0]<<" "<<ju[i][0]<<endl;
    		if(ju[i][0]>=0&&ju[i][0]<ans){
    			ans=ju[i][0];flag=1;
			}
    		if(ju[i][m-1]>=0&&ju[i][m-1]<ans){
    			ans=ju[i][m-1];flag=1;
			}
		}
		for(int i=0;i<m;++i){
		//	cout<<ju[0][i]<<" "<<ju[n-1][i]<<endl;
    		if(ju[0][i]>=0&&ju[0][i]<ans){
    			ans=ju[0][i];flag=1;
			}
    		if(ju[n-1][i]>=0&&ju[n-1][i]<ans){
    			ans=ju[n-1][i];flag=1;
			} 
		}
		/*
    	for(int i=0;i<n;++i){
	    	for(int o=0;o<m;++o){
    			cout<<ju[i][o]<<" ";
    		}cout<<endl;
    	}cout<<endl;
    	for(int i=0;i<n;++i){
	    	for(int o=0;o<m;++o){
    			cout<<fi[i][o]<<" ";
    		}cout<<endl;
    	}
    	cout<<"f"<<flag<<endl;
    	cout<<"ans"<<ans<<endl;*/
    	if(!flag) printf("IMPOSSIBLE\n");
    	else printf("%d\n",ans+1);
	}
	return 0;
}
/*
3
4 5
#####
#JF##
#..##
#..##

2
6 4
..F.
.F..
F.J.
....
..F.
F...

2
6 4
....
....
F.J.
....
....
F...

2
4 5
.....
.JF..
.....
.....
*/
