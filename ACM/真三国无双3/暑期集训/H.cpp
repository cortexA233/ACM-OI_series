#include<iostream>
using namespace std;

int main(){
	char a[100][100];
	int t,n,m;
	cin>>t;
	while(t){
		--t;
		cin>>n>>m;
		for(int i=0;i<n;++i){
			for(int o=0;o<m;++o){
				cin>>a[i][o];
			}
		}

  /*      for(int i=0;i<n;++i){
			for(int o=0;o<m;++o){
				cout<<a[i][o];
			}cout<<endl;
		}*/

		int s=0,ans=0;
		if(a[0][0]=='0') ++s;
		if(a[0][m-1]=='0') ++s;
		if(a[n-1][0]=='0') ++s;
		if(a[n-1][m-1]=='0') ++s;
		
		for(int i=1;i<n-1;++i){
			if(a[i][0]=='0') ++s;
			if(a[i][m-1]=='0') ++s;
		}
		for(int o=1;o<m-1;++o){
			if(a[0][o]=='0') ++s;
			if(a[n-1][o]=='0') ++s;
		}
		for(int i=1;i<n-1;++i){
			for(int o=1;o<m-1;++o){
				if(a[i][o]=='1') ++ans;
			}
		}
//		cout<<s<<" "<<ans<<endl;
		if(ans>=s) cout<<s<<endl;
		else cout<<-1<<endl;
	}
	return 0;
}
