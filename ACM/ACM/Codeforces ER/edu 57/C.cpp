#include<bits/stdc++.h>
using namespace std;
#define M 998244353
#define ll long long

int main(){
	ios::sync_with_stdio(0);
	int t,ang;
	cin>>t;
	while(t--){
		cin>>ang;
		int ans=-1;
		for(int i=3;i<=360;++i){
			int k=ang*i/180;
			if((ang*i)%180==0&&360%i==0&&1<=k&&k<=i-2){
				ans=i;break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
} 
