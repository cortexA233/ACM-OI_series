#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<string>
using namespace std;

int main(){
	int n,fl=1;
	char s[10000];
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>s[i];
	}s[0]='0';s[n+1]='0';
	for(int i=1;i<=n;++i){
		if(s[i]=='0'){
			if(s[i-1]=='0'&&s[i+1]=='0'){
				fl=0;break;
			}
		}else{
			if(s[i-1]=='1'||s[i+1]=='1'){
				fl=0;break;
			}
		}
	}
	if(!fl) cout<<"No";
	else cout<<"Yes";
	return 0;
}
