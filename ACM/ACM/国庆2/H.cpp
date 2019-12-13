#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	int t1=t;
	while(t--){
		double ans=0;
		int m,n,k;
		cin>>n>>m>>k; 
		for(int i=0;i<k;++i){
			double tn=n-i,tm=m-i;
			ans+=tn/tm;
		}	
		printf("Case #%d: %lf\n",t1-t,ans);
	}
	return 0;
}
