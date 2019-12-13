#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n,t=0;
	ll ans[100][100]={0};
	ans[1][1]=1;
	for(int i=1;i<=40;++i){
		for(int o=1;o<=40;++o){
			ans[1][1]=1;
			if(i==o) ans[i][o]=ans[i][o-1];
			else ans[i][o]=ans[i-1][o]+ans[i][o-1];
		//	cout<<ans[i][o]<<" ";
		}cout<<endl;
	}
	ans[1][1]=1;
	while(cin>>n){
		if(n==-1) break;
		cout<<++t<<" "<<n<<" "<<2*ans[n+1][n+1]<<endl;
	}
	return 0;
}
