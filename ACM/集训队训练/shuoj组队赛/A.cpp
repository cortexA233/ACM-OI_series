#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	int t1=t;
	while(t--){
		int n,m; 
		scanf("%d%d",&n,&m);
		int ans=m/n;
		printf("Case #%d: %d\n",t1-t,n*m-1);
	} 
	return 0;
}
