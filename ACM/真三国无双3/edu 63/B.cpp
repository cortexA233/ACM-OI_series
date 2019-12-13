#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	int n;
	string s;
	cin>>n>>s;
	int n8=0;
	int fl=0;
	int l,r;
	for(int i=0;i<n-10;++i){
		if(s[i]=='8'){
			++n8;
		}
	}
	if(n8>(n-11)/2){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
//	cout<<n8;
	return 0;
}

/*
13
8880000000000
800 0000 0000
*/
