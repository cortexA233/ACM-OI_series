#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	char s[100009];
	int n,x,m;
	cin>>n>>x;
	for(int i=1;i<=n;++i){
		cin>>s[i];
	}
	cin>>m;
	char com;
	cout<<s[x];
	for(int i=0;i<m;++i){
		cin>>com;
		if(com=='L') x--;
		if(com=='R') x++;
		cout<<s[x];
	}
	return 0;
}
