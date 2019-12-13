#include<bits/stdc++.h>
using namespace std;

int main(){
	int k=0,n,a[10009],sum=0;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a[i];
		sum+=a[i];
		if(a[i]>k) k=a[i];
	}
	while(k*n-sum<=sum){
		++k;
	}
	cout<<k;
	return 0;
}
