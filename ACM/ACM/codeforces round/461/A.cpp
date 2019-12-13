#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	long long n,m;
	cin>>n>>m;
	if(m==1){
		if(n==0)cout<<"Yes";
		else cout<<"No";
		return 0;
	}
	if(((n-m)%2)&&n-m>=-1&&m>0){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
	return 0;
}
