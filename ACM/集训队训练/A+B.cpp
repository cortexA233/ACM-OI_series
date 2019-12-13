#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	long long t,n,a=0;
	cin>>t;
	for(long long i=0;i<t;++i){
		cin>>n;a=0;
		if(a==n-a){
			++a;
		}
		cout<<a<<" "<<n-a;
		if(i<t-1)cout<<endl;
	}
	return 0;
}
