#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;

string saml="A   3  HIL JM O   2TUVWXY5",samn="1SE Z  8 ";

int huiwen(string a){
	int s=a.size();
	for(int i=0;i<s/2;++i){
		if(a[i]!=a[s-1-i]){
			return 0;
		}
	}
	return 1;
}

string mir(string a){
	string b;
	int s=a.size();
	for(int i=0;i<s;++i){
		if(isalpha(a[i])){
			b.push_back(saml[a[i]-'A']);
		}else{
			b.push_back(samn[a[i]-'1']);
		}
	}
	return b;
}

int fan(string a,string b){
	int s=a.size();
	for(int i=0;i<s;++i){
		if(a[i]!=b[s-i-1]){
			return 0;
		}
	}
	return 1;
}

int main(){
    string s;
    while(cin>>s){
    	if(huiwen(s)){
    		if(fan(mir(s),s)){
    			cout<<"回文镜像"<<endl;continue;
			}
			cout<<"回文"<<endl; 
		}else if(fan(mir(s),s)){
			cout<<"镜像"<<endl; 
		}
	}
	return 0;
}

