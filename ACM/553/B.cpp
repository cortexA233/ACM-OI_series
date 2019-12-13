#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll mo=1000000007;

int na(int a){
	int s=1;
	for(int i=0;i<a;++i) s*=2;
	return s;
}

int main(){
	int n,m;
	cin>>n>>m;
	int c[509][509],ans[509];
	int fl=0;
	for(int i=0;i<n;++i){
		for(int o=0;o<m;++o){
			cin>>c[i][o];
		}
		fl=fl^c[i][0];	ans[i]=1;
	}
	if(!fl){
		int flag=0;
		for(int i=0;i<n;++i){
			for(int o=0;o<m;++o){
				if(c[i][o]!=c[i][0]){
					flag=1;ans[i]=o+1;break;
				}
			}
		}
		if(flag){
			cout<<"TAK"<<endl;
			for(int i=0;i<n;++i){
				cout<<ans[i]<<" ";
			}
		}else{
			cout<<"NIE";
		}
	}else{
		cout<<"TAK"<<endl;
		for(int i=0;i<n;++i){
			cout<<ans[i]<<" ";
		}
	}
	return 0;
} 
