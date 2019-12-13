#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n;
	cin>>n;
	int a,b,c;
	if((n-1)%3==0){
		cout<<1<<" "<<2<<" "<<n-3;
		return 0;
	}
	if((n-2)%3==0){
		cout<<1<<" "<<2<<" "<<n-3;
		return 0;
	}
	if((n-3)%3==0){
		cout<<1<<" "<<1<<" "<<n-2;
		return 0;
	}
	return 0;
}
