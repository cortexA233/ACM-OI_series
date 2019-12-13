#include<bits/stdc++.h>
using namespace std;
#define ll long long



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int ans=1,n;
	ll a[200009];
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	a[n]=a[n-1]*4;
	int cu=1;
	for(int i=0;i<n;++i){
		if(a[i]*2>a[i+1]){
			++cu;
		}else{
			ans=max(ans,cu);
			cu=1;
		} 
	}
	cout<<max(ans,cu);
	return 0;
}
