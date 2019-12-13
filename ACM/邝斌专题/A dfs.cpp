#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring> 
using namespace std;

int n,k,sum;
char a[20][20];
int ju[20];

void dfs(int l,int num){
	if(!num){
		++sum;
	/*	for(int i=1;i<=n;++i){
			ju[i]=0;
		}*/ 
		return ;
	}
	if(l>n){
/*		if(num==0) ++sum;
		if(num==1){
			for(int i=1;i<=n;++i){
				if(a[l][i]=='#'&&!ju[i]) ++sum;
			}
		}
		for(int i=1;i<=n;++i){
			ju[i]=0;
		}*/
		return ;
	}
	
	dfs(l+1,num);
	for(int i=1;i<=n;++i){
		if(a[l][i]=='#'&&!ju[i]){
			ju[i]=1;
			dfs(l+1,num-1);
			ju[i]=0;
		}
	}
}

int main(){	
	while(cin>>n>>k){
		if(n==k&&n==-1) break;
		sum=0;
		for(int i=1;i<=n;++i){
			ju[i]=0;
			for(int o=1;o<=n;++o){
				cin>>a[i][o];
			}
		}
		dfs(1,k);
		cout<<sum<<endl;
	}
	return 0;
}

/*
5 3
#....
.##..
.###.
...#.
....#
4 3
#...
.##.
..#.
...#
*/
