#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cstdio>
using namespace std;

int a[20],n,j[20]={0},t[20]={0};

int main(){
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	for(int i=0;i<n;++i){
	   	cout<<a[i]<<" ";
    }cout<<endl;
	while(next_permutation(a,a+n)){
		for(int i=0;i<n;++i){
	    	cout<<a[i]<<" ";
    	}cout<<endl;
	}
	return 0;
}
