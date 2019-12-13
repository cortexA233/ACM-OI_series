#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a[600][600];

int main(){    
    for(int i=0;i<500;++i){
    	a[i][0]=1;a[i][i]=1;
	}
	for(int i=2;i<50;++i){
		for(int o=1;o<i;++o){
			a[i][o]=a[i-1][o-1]+a[i-1][o];
		}
	}
	int c[100];
	for(int i=0;i<30;++i){
		c[i]=0;
		for(int o=0;o<=i;++o){
			if(a[i][o]%2){
				cout<<1<<" ";++c[i];
			}
			else cout<<0<<" ";
		}cout<<endl;
	}
	for(int i=0;i<30;++i){
		cout<<c[i]<<" ";
	}
	return 0;
} 
