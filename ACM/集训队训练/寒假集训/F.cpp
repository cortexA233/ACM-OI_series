#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int pre[100009];
/*
int finda(int x){
	int r=x;
	while(r!=pre[r]){
		r=pre[r];
	}
	r=x;
	while(pre[r]!=r){
		r=pre[r];
		pre[r]=x;
	}
	return x;
}
*/
int finda(int a){
	int x=a;
	while(pre[x]!=x){
		x=pre[x];
	}
	int x1=a;
	while(pre[x1]!=x1){
		x1=pre[x1];
		pre[x1]=x;
	}
	return x;
}

void join(int a,int b){
	int fx=finda(a),fy=finda(b);
	pre[fx]=fy;
}

int main(){
	ios::sync_with_stdio(0);
	int n,m,a,b;
	cin>>n>>m;
	for(int i=0;i<=n;++i){
		pre[i]=i;
	}
	int fl=1;
	for(int i=0;i<m;++i){
		cin>>a>>b;
		if(finda(a)==b){
			fl=0;
		}
		if(fl) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
		join(b,a);
	}
	return 0;
}

/*
4 4
1 2
2 3
3 1
1 4
*/
