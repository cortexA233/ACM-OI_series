#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
	int m,n,a[4000],s=0,min=0;
	cin>>n>>m;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
/*	for(int i=0;i<n;++i){
		cout<<a[i]<<" ";
	}*/
	for(int i=0;i<m;++i){
		s+=a[i];
		min+=a[i];
	}
	for(int i=m;i<n;++i){
		s+=a[i];s-=a[i-m];
		if(s<min){
			min=s;
		}
	} 
	cout<<min;
	return 0;
}
