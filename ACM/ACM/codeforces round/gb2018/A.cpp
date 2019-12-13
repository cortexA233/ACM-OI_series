#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios::sync_with_stdio(0);
	int n,a[100009],y,b,r;
	cin>>y>>b>>r;
	int ans=0;
	if(3*y+3>ans&&b>=y+1&&r>=y+2) ans=3*y+3;
	if(3*b>ans&&y>=b-1&&r>=b+1) ans=3*b;
	if(3*r-3>ans&&y>=r-2&&b>=r-1) ans=3*r-3;
	cout<<ans;
}
