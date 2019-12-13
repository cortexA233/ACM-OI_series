#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;
	ios::sync_with_stdio(false);
	string s;
	while(t--){
		cin>>s;
		int fld=0,flu=0,fll=0;
		int n=s.size();
		for(int i=0;i<n;++i){
			if(s[i]>='0'&&s[i]<='9') fld++;
			if(s[i]>='a'&&s[i]<='z') fll++;
			if(s[i]>='A'&&s[i]<='Z') flu++;
		}
		int num0=0;
		if(!fld) ++num0;
		if(!flu) ++num0;
		if(!fll) ++num0;
		if(fld&&fll&&flu){
			cout<<s<<endl;
			continue;
		}
		if(num0==1){
			if(!fld){
				for(int i=0;i<n;++i){
					if(flu>=2&&s[i]<='Z'&&s[i]>='A'){
						s[i]='1';break;
					}
					if(fll>=2&&s[i]<='z'&&s[i]>='a'){
						s[i]='1';break;
					}
				}
			}
			if(!flu){
				for(int i=0;i<n;++i){
					if(fld>=2&&s[i]<='9'&&s[i]>='0'){
						s[i]='A';break;
					}
					if(fll>=2&&s[i]<='z'&&s[i]>='a'){
						s[i]='A';break;
					}
				}
			}
			if(!fll){
				for(int i=0;i<n;++i){
					if(fld>=2&&s[i]<='9'&&s[i]>='0'){
						s[i]='a';break;
					}
					if(flu>=2&&s[i]<='Z'&&s[i]>='A'){
						s[i]='a';break;
					}
				}
			}
		}
		if(num0==2){
			if(!fld&&!flu){
				s[0]='1';s[1]='A';
			}
			if(!fld&&!fll){
				s[0]='1';s[1]='a';
			}
			if(!fll&&!flu){
				s[0]='a';s[1]='A';
			}
		}
		cout<<s<<endl;
	}
	return 0;
} 
