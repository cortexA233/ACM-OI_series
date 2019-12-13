#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n,a[100];
	a[1]=1;a[2]=2;a[3]=3;a[4]=4;a[5]=6;
	for(int i=5;i<100;++i){
		a[i]=a[i-1]+a[i-3];
	}
	while(cin>>n){
		if(!n)break;
		cout<<a[n]<<endl;
	}
	return 0;
}
