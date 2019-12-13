#include<bits/stdc++.h>
using namespace std;

int main(){
	string a,b,s;
	cin>>a>>b;
	for(int i=0;i<a.size();++i){
		s.push_back(abs(a[i]-b[i])+'0');
	}
	int fl=0;
	for(int i=0;i<s.size();++i){
		if(s[i]-'0') fl=1;
		if(fl)cout<<s[i];
	}
	if(!fl) cout<<0;
    return 0;
}
