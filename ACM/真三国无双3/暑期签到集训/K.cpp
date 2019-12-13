#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
	int n;
	double a[200];
	while(cin>>n){
		int a1=0,b=0,c=0;
		if(!n) break;
		for(int i=0;i<n;++i){
			cin>>a[i];
			if(a[i]<0)++a1;
			if(!a[i])++b;
			if(a[i]>0)++c;
		}
		cout<<a1<<" "<<b<<" "<<c<<endl;
	}
	return 0;
} 
