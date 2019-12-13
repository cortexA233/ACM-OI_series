#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<string>
#include<queue>
#include<vector>
using namespace std;

vector < vector<char> > a;
vector < vector<int> > ans;
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
int sx=-1,sy=-1,ex=-1,ey=-1;
int n,m,d;

void bfs(){
	queue<int> qx,qy;
	int nx,ny,tx,ty;
	qx.push(sx);qy.push(sy);
	ans[sx][sy]=0;
	while(qx.size()&&qy.size()){
		nx=qx.front();ny=qy.front();
		qx.pop();qy.pop();
		for(int i=0;i<4;++i){
			tx=nx+dx[i];ty=ny+dy[i];
			if(tx>=0&&ty>=0&&tx<n&&ty<m&&(a[tx][ty]=='.'||a[tx][ty]=='F')&&ans[tx][ty]<0){
				ans[tx][ty]=ans[nx][ny]+1;
				qx.push(tx);qy.push(ty);
			}
		}	
	} 
}
/*
void set(int x,int y,int d){
	queue<int> qx,qy;
	int nx,ny,tx,ty;
	qx.push(x);qy.push(y);
	ans[x][y]=0;
	while(qx.size()&&qy.size()){
		nx=qx.front();ny=qy.front();
		qx.pop();qy.pop();
		int fl;
		for(int i=0;i<4;++i){
			fl=0;
			tx=nx+dx[i];ty=ny+dy[i];
			if(tx>=0&&ty>=0&&tx<n&&ty<m){                        
				ans[tx][ty]=ans[nx][ny]+1;
				a[tx][ty]='K';
				if(ans[tx][ty]<d){
					qx.push(tx);qy.push(ty);
				}
				if(fl) a[tx][ty]='M';		
			}
		}	
	} 
}*/

void set(int x,int y,int d){
	if(d<0) return ;
	if(a[x][y]!='M') a[x][y]='K';
	int nx,ny;
	for(int i=0;i<4;++i){
		nx=x+dx[i];ny=y+dy[i];
		if(nx>=0&&ny>=0&&nx<n&&ny<m){
			set(nx,ny,d-1);
		}
	} 
}

int main(){
	char c;
	cin>>n>>m>>d;
	getchar();
	for(int i=0;i<n;++i){
		vector <char > temp;
		vector <int > t2;
		for(int o=0;o<m;++o){
			scanf("%c",&c);
			temp.push_back(c);
			t2.push_back(-1);
		}
		a.push_back(temp);
		getchar();
		ans.push_back(t2);
	}

	for(int i=0;i<n;++i){
		for(int o=0;o<m;++o){
			if(a[i][o]=='M') set(i,o,d);
		}
	}
  /*  
    for(int i=0;i<n;++i){
		for(int o=0;o<m;++o){
			cout<<a[i][o];
		}cout<<endl;
	}
    */ 
	for(int i=0;i<n;++i){
		for(int o=0;o<m;++o){
			ans[i][o]=-1;
			if(a[i][o]=='S'){
				sx=i,sy=o;
			} 
			if(a[i][o]=='F'){
				ex=i;ey=o;
			}
		}
	}
	if(sx<0||ex<0||sy<0||ey<0){
		cout<<-1;return 0;
	}else{
		bfs();
		cout<<ans[ex][ey];
		return 0;
	}
	return 0;
}




/*
0001000
0011100
0111110
1112111
0111110
0011100
0001000*/
