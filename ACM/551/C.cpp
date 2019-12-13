#include<bits/stdc++.h>
using namespace std;
#define ll long long

int prea[300009]={0},preb[300009]={0};
int pa[300009]={0},pb[300009]={0};

int main(){
	int n;
	string s;
	cin>>n;
	cin>>s;
	int n1=0,n2=0,s1=0,s2=0;
	for(int i=0;i<n;++i){
		if(s[i]=='('){
			++n1;
		}
		if(s[i]==')'){
			++n2;
		}
	}
	int fl=1;
	string ans;
	cout<<n1<<" "<<n2<<endl;
	for(int i=0;i<n;++i){
		if(s[i]=='('){
			ans.push_back('(');
			++s1;
		}
		if(s[i]==')'){
			++s2;
			ans.push_back(')');
		}
		if(s[i]=='?'){
			if(n1<n/2){
				++n1;
				++s1;
				ans.push_back('(');
			}else{
				++n2;
				++s2;
				ans.push_back(')');
			}
		}
		if(s2>=s1&&i<n-1){
			fl=0;break;
		}
		cout<<n1<<" "<<n2<<" "<<ans<<endl;
	} 
	if(n1!=n2) fl=0;
	if(!fl){
		cout<<":(";
		return 0;
	}else{
		cout<<ans;
	}
	return 0;
}
