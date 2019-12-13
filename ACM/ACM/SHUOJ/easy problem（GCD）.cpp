#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int gcd(int a,int b){
	int t;
	if(a<b){
		t=a;
		a=b;
		b=t;
	}
	while(a%b!=0){
		t=a%b;
		a=b;
		b=t;
	}
	return b;
}

int main(){
	ios::sync_with_stdio(false);
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b);
	return 0;
} 

