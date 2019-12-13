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

int a,b,c,t;

int main(){
	ios::sync_with_stdio(false);
	cin>>a>>b>>c;
	if(b>a){
		t=b;b=a;a=t;
	} 
	if(c>b){
		t=c;c=b;b=t;
	}
	if(b>a){
		t=b;b=a;a=t;
	}
	t=gcd(a,c);
	a/=t;c/=t;
	printf("%d/%d",c,a);
	return 0;
} 
