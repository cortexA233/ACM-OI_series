#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n;
int a[20];
int vis[20];

int ju[]={0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0};

void dfs(int c){
	if(c==n){
		if(ju[a[0]+a[c-1]]){
			for(int i=0;i<c;++i){
				printf("%d",a[i]);
				if(i!=c-1) cout<<" ";
			}cout<<endl;
		}
		return ;
	}
	for(int i=1;i<=n;++i){
		if(ju[i+a[c-1]]&&!vis[i]){
			vis[i]=1;
			a[c]=i;
			dfs(c+1);
			vis[i]=0;
		}
	}
}

int main(){
	int t=1;
	while(cin>>n){
	    if(t>1) cout<<endl;
		printf("Case %d:\n",t++);
		a[0]=1;
		vis[1]=1;
		dfs(1);	
	}
	return 0;
}
