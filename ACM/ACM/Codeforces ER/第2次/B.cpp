#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<cstdio>
#include<cmath>
using namespace std;

int n,a,s[100009]={0};

int absi(int a){
	if(a<0)return -a;
	return a;
}

int main(){
	int j1=0,j2=0;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>s[i];
	}
	int minn=1000000,j=0;
	for(int i=0;i<n;++i){
		s[i]=1000000/2-s[i];
		if(absi(s[i])<minn){
			if(s[i]>0){
				j=0;
			}
			if(s[i]<0){
				j=1;
			}
			minn=absi(s[i]);
		}
	}
	if(j)cout<<1000000/2-minn;
	else cout<<1000000/2-minn-1;
	return 0;
}




