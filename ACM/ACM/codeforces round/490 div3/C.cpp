#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;

int gmax(int a,int b){
	if(a>b)return a;
	return b;
}


string t,s;


int main(){
	int nl[100]={0},num=0,n,k,j[1000]={0};
	cin>>n>>k;
	cin>>s;
	for(int i=0;i<n;++i){
		++nl[s[i]-'a'];
	}
	while(k>0){
		while(!nl[num]){
			++num;
		}
		for(int i=0;i<n;++i){
			if(!nl[num]||!k)break;
			if(s[i]==num+'a'){
				j[i]=1;--k;--nl[num];
			}
		}
	}
	for(int i=0;i<n;++i){
		if(!j[i])cout<<s[i];
	}
	return 0;
}


