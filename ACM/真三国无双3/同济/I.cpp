#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mo 1000000007

ll n,m,ans=0;

int f[222][222]={0};

void clr(int s){
	for(int i=0;i<n;++i){
		for(int o=0;o<m;++o){
			f[i][o]=s;
		}
	}
}

int che(int x,int y){
	for(int i=x-1;i<=x+1;++i){
		for(int o=y-1;o<=y+1;++o){
			if(i<0||o<0||i>=n||o>=m) continue;
			if(f[i][o]>=1) return 0;
		}
	}
	return 1;
}

void dfs(int x,int y,int st){
	if(x<0||y<0||x>=n||y>=m) return ;
	if(f[x][y]>=1) return ;
	if(st>=3){
		int cx=220,cy=220;
		int fl=0;
		for(int i=0;i<n;++i){
			for(int o=0;o<m;++o){
				if(che(i,o)==1){
					cx=i;cy=o;
					f[i][o]=st;
					fl=1;break;
				}
			}
		}
		if(!fl) return ;
		cout<<st<<"!"<<endl;
		++ans;
		for(int i=0;i<n;++i){
			for(int o=0;o<m;++o){
				cout<<f[i][o];
			}
			cout<<endl;
		}
		f[cx][cy]=0;
		return ;
	}
	if(f[x][y]==0){
		if(che(x,y)==0) return ;
		f[x][y]=st; 
		for(int i=0;i<n;++i){
			for(int o=0;o<m;++o){
				if(f[i][o]==0){
			//		cout<<i<<" "<<o<<" yes"<<endl;
					dfs(i,o,st+1);
					f[i][o]=0;
				}else{
			//		cout<<i<<" "<<o<<"!"<<endl;
				}
			}
		}
		/*
		for(int i=-1;i<=1;++i){
			for(int o=-1;o<=1;++o){
				if(i>=0&&o>=0&&i<n&&o<m) f[i][o]=0;
			}
		}
		*/
	}
	return ;
}

int main(){
	while(cin>>n>>m){
		ans=0;
		for(int i=0;i<n;++i){
			for(int o=0;o<m;++o){
				cout<<"begin "<<i<<" "<<o<<endl;
				clr(0);
				dfs(i,o,1);
			}
		}
		cout<<ans<<endl;	
	}
	return 0;
}
