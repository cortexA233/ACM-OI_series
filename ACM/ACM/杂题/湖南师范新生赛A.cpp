#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
	int n,k;
	int a[3009];
	while(cin>>n>>k){
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		int flag=0;
		for(int i=0;i<n;++i){
			if(flag) break;
			for(int o=0;o<n;++o){
				if(flag) break;
				for(int p=0;p<n;++p){
					if(a[i]+a[o]+a[p]==k){
						flag=1;break;
					}
				}
			}
		}
		if(flag){
			cout<<"o hu~"<<endl;
		}else{
			cout<<"wo yo wo yo~"<<endl;
		}
	}
	return 0;
}
