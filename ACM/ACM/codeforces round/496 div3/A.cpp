#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

int main(){
	int a[100009],n;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}a[n]=-1;//a[n-1]+1;
	int num[100009]={0};
	int c=0;
//	num[c]=1;
	for(int i=0;i<n;++i){
		if(a[i]>=a[i+1]){
			++num[c];
		    ++c;	
		}
		else ++num[c];
	}
	cout<<c<<endl;
	for(int i=0;i<c;++i){
		cout<<num[i]<<" ";
	}
	return 0;
}
