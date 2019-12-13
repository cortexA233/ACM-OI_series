#include<iostream>
using namespace std;

int main(){
	long long a[100];
	a[1]=0;a[2]=1;a[3]=1; 
	for(int i=4;i<=50;++i){
		a[i]=a[i-3]+a[i-2]+a[i-1];
	}
	int n;
	while(cin>>n){
		cout<<a[n]<<endl;
	}
	return 0;
}
