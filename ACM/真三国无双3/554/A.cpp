#include<bits/stdc++.h>
using namespace std;

int a[100009],b[100009];

int main(){
	int n,m;
	cin>>n>>m;
	int nj1=0,no1=0,nj2=0,no2=0;
	for(int i=0;i<n;++i){
		cin>>a[i];
		if(a[i]%2) ++nj1;
		else ++no1;
	}
	for(int i=0;i<m;++i){
		cin>>b[i];
		if(b[i]%2) ++nj2;
		else ++no2;
	}
	cout<<min(no2,nj1)+min(no1,nj2);
	return 0;
} 
