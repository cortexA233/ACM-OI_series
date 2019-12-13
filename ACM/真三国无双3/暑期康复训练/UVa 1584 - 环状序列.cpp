#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

string a;
int s;
	
int com(int c,int d){
	for(int i=c;i<c+s;++i){
		if(a[i]<a[i-c+d]){
			return 1;
		}else if(a[i]>a[i-c+d]){
			return 0;
		}
	}
	return -1;
}

int main(){
	int be=0;
	cin>>a;
	s=a.size();
	for(int i=0;i<s;++i){
		a.push_back(a[i]);
	} 
	for(int i=0;i<s;++i){
		if(com(be,i)==0){
			be=i;
		}
	}
	for(int i=be;i<be+s;++i){
		cout<<a[i];
	} 
	return 0;
	
}
