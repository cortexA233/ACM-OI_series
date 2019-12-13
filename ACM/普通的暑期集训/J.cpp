#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;

int cmp(string a,string b){
	return a.size()>b.size();
}

int main(){
	int n;
	string s[1009];
	cin>>n;
	for(int i=0;i<n;++i){
	    cin>>s[i]; 
	} 
	sort(s,s+n,cmp);
	for(int i=0;i<n;++i){
	    cout<<s[i]<<" "; 
	} 
	return 0;
}
