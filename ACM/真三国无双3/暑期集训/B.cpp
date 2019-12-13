#include<iostream>
using namespace std;

int main(){
	long long n,m,t,a[10000];
	cin>>t;
	while(t){
		--t;
		cin>>n>>m;
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		for(int i=0;i<n;++i){
			if(a[i]!=-1){
				for(int o=i+1;a[o]==-1;++o){
					a[o]=(a[o-1]+1)%m;
				}
				for(int o=i-1;a[o]==-1;--o){
					a[o]=a[o+1]-1;
					if(a[o]>=m){
						a[o]-=m;
					}
					if(a[o]<0){
						a[o]+=m;
					}
				}
			}
		}
		for(int i=0;i<n;++i){
			cout<<a[i]<<" ";
		}cout<<endl;
	} 
	return 0;
}
