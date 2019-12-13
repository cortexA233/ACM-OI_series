#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int nabs(int a){
	if(a<0)return -a;
	return a;
}

int main(){
	int t;
	cin>>t;
	while(t){
		--t;
		int mi,minn=40000000,dt,d[2009],l,n,k[2009],f[2009],ft;
		cin>>l>>n;	
		for(int i=0;i<=l;++i){
			f[i]=0;d[i]=0;
		}
		for(int i=0;i<n;++i){
			cin>>k[i];
		}
		for(int i=0;i<n;++i){
			cin>>f[i];
		}
		for(int i=0;i<=l;++i){
			for(int o=0;o<n;++o){
				if(f[o]-(nabs(i-k[o]))<=0)continue;
				else d[i]+=f[o]-(nabs(i-k[o]));
			}
			if(d[i]<minn){
				mi=i;minn=d[i];
			}
		}
		cout<<mi<<" "<<minn<<endl;
	}
	return 0;
}
