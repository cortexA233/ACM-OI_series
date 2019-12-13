#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;

int main(){
	long long n,m,a[100],b[100],s[10009],num=0,maxn=-10000000000000000009,maxi=0;
	cin>>n>>m;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	for(int i=0;i<m;++i){
		cin>>b[i];
	}
	for(int i=0;i<n;++i){
		for(int o=0;o<m;++o){
			if(a[i]*b[o]>maxn){
				maxn=a[i]*b[o];
				maxi=i;
			}
		}
	}
	maxn=-10000000000000000009;
	for(int i=0;i<n;++i){
		for(int o=0;o<m;++o){
			if(a[i]*b[o]>maxn&&i!=maxi){
				maxn=a[i]*b[o];
			}
		}
	}
	cout<<maxn;
	return 0;
}
