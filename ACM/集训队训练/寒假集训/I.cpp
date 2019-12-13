#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	string s;
	cin>>s;
	int n=s.size();
	int fl=0,fl1=0;
	for(int i=0;i<n/2;++i){
		if(fl>=2) break;
		if(s[i]!=s[n-1-i+fl]) ++fl;
	}
	for(int i=0;i<n/2;++i){
		if(fl1>=2) break;
		if(s[i-fl1]!=s[n-1-i]) ++fl1;
	}
	if(fl>=2&&fl1>=2) cout<<"No";
	else cout<<"Yes";
	return 0;
}
