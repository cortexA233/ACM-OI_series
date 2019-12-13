#include<bits/stdc++.h>
using namespace std;

int s,n,m,ans;
int judge=0;
int vi[105][105][105];

struct nod{
	int n1,m1,s1,num;
};


void bfs(){
	nod t;
	t.s1=s;t.n1=0;t.m1=0;t.num=0;
	queue<nod> q;
	q.push(t);
	vi[s][n][m]=1;
	while(!q.empty()){
	    nod te;
		t=q.front();
		q.pop();
		if((t.n1==t.m1&&t.n1==s/2)||(t.n1==t.s1&&t.n1==s/2)||(t.s1==t.m1&&t.s1==s/2)){
			ans=t.num;
			break;
		}
		
	}
}

int main(){	
	while(cin>>s>>n>>m){
		judge=0;
		ans=0;
		if(s==0&&n==0&&m==0) break;
		if(s&1){
			cout<<"NO"<<endl;
			continue;
		}
		for(int i=0;i<=s;++i){
			for(int o=0;o<=n;++o){
				for(int p=0;p<=m;++p){
					vi[i][o][p]=1;
				}
			}
		}
		bfs();
		cout<<ans<<endl;
	}
	return 0;
}
