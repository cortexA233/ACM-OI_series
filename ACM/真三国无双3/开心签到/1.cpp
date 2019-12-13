#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t){
		--t;
		int n,a,b;
		string c;
		cin>>n;
		if(!n){
			cin>>a>>b;
			cout<<a+b<<endl;
		}else{
			cin>>c;
			cout<<c.size()<<endl;
		}
	}
	return 0;
}
