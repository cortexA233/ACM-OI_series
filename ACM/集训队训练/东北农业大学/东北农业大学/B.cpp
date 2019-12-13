#include<iostream>
#include<string>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
	long long t,n,s;
	cin>>t;
	while(t){
		--t;
		cin>>n;
		s=((n*n+1)/2)*((n*n+1)/2);
		cout<<s<<endl;
	}
	return 0;
}
