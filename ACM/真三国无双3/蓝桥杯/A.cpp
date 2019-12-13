#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int a[200][200],num=0,sum=0;
	cin>>n;
	for(int i=0;i<n;++i){
		for(int o=0;o<n;++o){
			a[i][o]=++num;
		}
	}
	for(int i=0;i<n/2;++i){
		for(int o=0;o<n/2-i;++o){
			a[i][o]=0;
		}
	}
	for(int i=0;i<n/2;++i){
		for(int o=n/2+i+1;o<n;++o){
			a[i][o]=0;
		}
	}
	for(int i=n/2+1;i<n;++i){
		for(int o=0;o<i-n/2;++o){
			a[i][o]=0;
		}
	}
	for(int i=n/2+1;i<n;++i){
		for(int o=n-(i-n/2);o<n;++o){
			a[i][o]=0;
		}
	}
	for(int i=0;i<n;++i){
		for(int o=0;o<n;++o){
			sum+=a[i][o];
		}
	}
	cout<<sum;
	return 0;
}
