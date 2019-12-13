#include<bits/stdc++.h>
using namespace std;
#define ll long long

int ju(int a,int b,int c){
	if(a+b<c||a+c<b||b+c<a) return 0;
	return 1;
}

int a[1000009];

int main(){
	ios::sync_with_stdio(0);
	int n,m,k;
	string s[109];
	string ans[1009];
	while(cin>>n>>m>>k){
		for(int i=0;i<n;++i){
			cin>>s[i];
		}
		for(int i=0;i<n;++i){
			for(int o=0;o<k;++o){
				for(int p=0;p<m;++p){
					for(int j=0;j<k;++j){
						cout<<s[i][p];
					}
				}
				cout<<endl;
			}
	//		cout<<endl;
		}
	}
	return 0;
} 
