#include<bits/stdc++.h>
using namespace std;
#define ll long long

int nabs(int a){
	if(a<0) return -a;
	return a; 
} 

struct st{
	ll a,b;
};

int cmp(st a,st b){
	return a.b<b.b;
}

st g[100009];

int main(){
	ios::sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i=0;i<n;++i) cin>>g[i].a;
	for(int i=0;i<n;++i) cin>>g[i].b;
	sort(g,g+n,cmp);
	for(int i=0;i<n;++i) cout<<g[i].a<<" ";cout<<endl;
	int cur=0;
	int flag=1;
	for(int i=0;i<n;++i){
		if(g[i].b-cur-g[i].a<0){
			flag=0;break;
		}
		cur+=g[i].a;
		cur+=2; 
	}
	if(flag) cout<<"YES";
	else cout<<"NO";
	return 0;
}
