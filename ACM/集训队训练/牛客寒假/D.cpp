#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,a[100009],ans=0;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a[i];
		if(a[i]<60) ans+=400;
	}cout<<ans;
	return 0;
}
