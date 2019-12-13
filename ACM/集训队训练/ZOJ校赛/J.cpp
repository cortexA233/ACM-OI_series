#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;

int main(){
	string a,b;
	int t;
	cin>>t;
	while(t){
		--t;
		cin>>a>>b;
		b[0]=b[0]-32;
		cout<<b<<a<<endl;
	}
	return 0;
}
