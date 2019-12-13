#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n,m,p;
	cin>>n>>m>>p;
	if(((n*m)%p)||(n<p&&m<p)){
		cout<<"No";
		return 0;
	}
	cout<<"Yes"<<endl;
	int ans[150][150]={0};
	if(n%p==0){
		int num=1;
		for(int i=1;i<=m;++i){
			for(int o=1;o<=n;++o){
				ans[o][i]=num;
				if(o%p==0){
					++num;
				}
			}
		}
	//	cout<<"!";
	}else{
		int num=1;
		for(int i=1;i<=n;++i){
			for(int o=1;o<=m;++o){
				ans[i][o]=num;
			    if(o%p==0){
			    	++num;
				}
			}
			
		}
	}
	for(int i=1;i<=n;++i){
		for(int o=1;o<=m;++o){
			cout<<ans[i][o]<<" ";
		}cout<<endl;
	}
	return 0;
}
