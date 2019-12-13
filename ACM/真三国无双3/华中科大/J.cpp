#include<iostream>
#include<algorithm>
using namespace std;

char a[100][100];
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
int n,m,sum=0;

int numb(int x,int y){
	int num=0;
	for(int i=0;i<4;++i){
		if(x+dx[i]>=0&&y+dy[i]>=0&&y+dy[i]<m&&x+dx[i]<n&&a[x+dx[i]][y+dy[i]]=='#'){
			++num;
		}
	}
	return num;
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
			if(numb(i,o)==4&&a[i][o]=='#'){
				++sum;
				a[i][o]='.';
				for(int p=0;p<4;++p){
					if(i+dx[p]>=0&&o+dy[p]>=0&&o+dy[p]<m&&i+dx[p]<n){
						a[i+dx[p]][o+dy[p]]='.';
					}
				}
			}
		}
	}
	for(int i=0;i<n;++i){
		for(int o=0;o<m;++o){
			if(numb(i,o)==3&&a[i][o]=='#'){
				++sum;
				a[i][o]='.';
				for(int p=0;p<4;++p){
					if(i+dx[p]>=0&&o+dy[p]>=0&&o+dy[p]<m&&i+dx[p]<n){
						a[i+dx[p]][o+dy[p]]='.';
					}
				}
			}
		}
	}
	for(int i=0;i<n;++i){
		for(int o=0;o<m;++o){
			if(numb(i,o)==2&&a[i][o]=='#'){
				++sum;
				a[i][o]='.';
				for(int p=0;p<4;++p){
					if(i+dx[p]>=0&&o+dy[p]>=0&&o+dy[p]<m&&i+dx[p]<n){
						a[i+dx[p]][o+dy[p]]='.';
					}
				}
			}
		}
	}
	for(int i=0;i<n;++i){
		for(int o=0;o<m;++o){
			if(numb(i,o)==1&&a[i][o]=='#'){
				++sum;
				a[i][o]='.';
				for(int p=0;p<4;++p){
					if(i+dx[p]>=0&&o+dy[p]>=0&&o+dy[p]<m&&i+dx[p]<n){
						a[i+dx[p]][o+dy[p]]='.';
					}
				}
			}
		}
	}
	for(int i=0;i<n;++i){
		for(int o=0;o<m;++o){
			if(numb(i,o)==0&&a[i][o]=='#'){
				++sum;
				a[i][o]='.';
				for(int p=0;p<4;++p){
					if(i+dx[p]>=0&&o+dy[p]>=0&&o+dy[p]<m&&i+dx[p]<n){
						a[i+dx[p]][o+dy[p]]='.';
					}
				}
			}
		}
	}
	cout<<sum;
	return 0;
}
