#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	string s;
	cin>>s;
	int n=s.size();
	int ans[10000]={0};
	int fl[10000];
	for(int i=0;i<n;++i) fl[i]=1;
	for(int i=0;i<n;++i){
		if(s[i]=='a'){
			cout<<ans[i]<<" ";
		}else{
			if(i==n-1){
				cout<<0;
				continue;
			}
			if(fl[i]){
				cout<<1<<" ";
				int o=i+1;
				while(s[o]!='b') ++o;
				ans[o-1]=1;
				while(s[o]=='b'){
					fl[o]=0;
					++o;
				}
				fl[o-1]=1;
			}else{
				cout<<0<<" ";
			}
		}
	}
/*	for(int i=0;i<n;++i){
		cout<<ans[i]<<" ";
	}*/ 
	return 0;
}
