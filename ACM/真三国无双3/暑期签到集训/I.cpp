#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int j[150][150],n,m,s0,s1;
char a[150][150]; 

void dfs0(int x,int y,int c){
	if(j[x][y]||x>=n+2||y>=m+2||x<0||y<0||a[x][y]!='0') return ;
	j[x][y]=c;
	for(int i=-1;i<=1;++i){
		for(int o=-1;o<=1;++o){
			if((!i||!o)) dfs0(x+i,y+o,c);
		}
	}
}

void dfs1(int x,int y,int c){
	if(j[x][y]||x>=n+2||y>=m+2||x<0||y<0||a[x][y]!='1') return ;
	j[x][y]=c;
	for(int i=-1;i<=1;++i){
		for(int o=-1;o<=1;++o){
			if(!i||!o) dfs1(x+i,y+o,c);
		}
	}
}

int main(){
	while(cin>>n>>m){
		s0=0;s1=0;
		for(int i=0;i<=n+1;++i){
			for(int o=0;o<=m+1;++o){
				a[i][o]='0';
				j[i][o]=0;
			}
		}
		for(int i=1;i<=n;++i){
			for(int o=1;o<=m;++o){
				cin>>a[i][o];
			}
		}
		for(int i=0;i<=n+1;++i){
			for(int o=0;o<=m+1;++o){
				if(a[i][o]=='1'&&!j[i][o]){
					++s1;
				    dfs1(i,o,s1);	
				}
			}
		}
		for(int i=0;i<=n+1;++i){
			for(int o=0;o<=m+1;++o){
				j[i][o]=0;	
			}
		}
		for(int i=0;i<=n+1;++i){
			for(int o=0;o<=m+1;++o){
				if(a[i][o]=='0'&&!j[i][o]){
					++s0;
				    dfs0(i,o,s0);	
				}				
			}
		}	
		for(int i=0;i<=n+1;++i){
			for(int o=0;o<=m+1;++o){
				cout<<a[i][o];
			}cout<<endl;
		}
		if(s0==s1&&s0==1){
			cout<<1<<endl;continue;
		}
		if(s0==2&&s1==1){
			cout<<0<<endl;continue;
		}
		cout<<-1<<endl;
	}
	return 0;
} 

/*
4 5
11001
10001
10001
00110

5 9
*/
