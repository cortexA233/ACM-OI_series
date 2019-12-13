#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;

char a[60][60];
int j[60][60],n,t,ans=0;

int dfs(int x,int y){
	
} 

int main(){
	cin>>t;int t1=t;
	while(t){
		--t;
		scanf("%d",&n);
		for(int i=0;i<n;++i){
			for(int o=0;o<n;++o){
				scanf("%c",&a[i][o]);
			}
		}
		for(int i=0;i<n;++i){
			for(int o=0;o<n;++o){
				j[i][o]=0;
			}
		}
		printf("Case %d: %d",t1-t,ans);
	}
	return 0;
}
