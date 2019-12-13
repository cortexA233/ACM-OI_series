#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll l,r;
	ios::sync_with_stdio(false);
	cin>>l>>r;
	cout<<"YES"<<endl; 
	for(int i=l;i<=r;i+=2){
		cout<<i<<" "<<i+1<<endl;
	}
	return 0;
} 
