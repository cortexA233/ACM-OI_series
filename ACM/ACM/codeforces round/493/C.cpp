#include<iostream>
#include<cmath>
#include<string>
#include<cstdio>
#include<algorithm>
using namespace std;

long long nmin(long long a,long long b){
	if(a<b) return a;
	else return b;
}

int main(){
	long long n,x,y,s=0,num=0;
	char a[300009];
	cin>>n>>x>>y;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	a[n]='1';
	for(int i=0;i<n;++i){
		if(a[i]=='0'&&a[i+1]=='1') ++num;
	}
//	cout<<num<<endl;
    if(!num){
    	cout<<0;
    	return 0;
	}
	s+=(num-1)*nmin(x,y)+y;
	cout<<s;
	return 0;
}
