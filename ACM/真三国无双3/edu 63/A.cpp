#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	string s;
	cin>>n>>s;
	int fl=0;
	int l,r;
	for(int i=1;i<n;++i){
		if(s[i]<s[i-1]){
			fl=1;
			l=i-1;r=i;
			break;
		}
	}
	if(fl){
		cout<<"YES"<<endl<<l+1<<" "<<r+1;
	}else{
		cout<<"NO";
	}
	return 0;
}
