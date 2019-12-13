#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<queue>
#include<cmath>
using namespace std;

int main(){
	string a;int si,t;
	while(cin>>a){
		si=a.size();
		for(int i=0;i<si;++i){
			t=i-1;
			while(a[t]==' '){
				--t;
			}
			if(a[i]==a[t]&&a[t]=='o'){
				a[i]='O';a[t]=' ';
			}
			if(a[i]==a[t]&&a[t]=='O'){
				a[i]=' ';a[t]=' ';
			}
			t=i-1;
			while(a[t]==' '){
				--t;
			}
			if(a[i]==a[t]&&a[t]=='o'){
				a[i]='O';a[t]=' ';
			}
			if(a[i]==a[t]&&a[t]=='O'){
				a[i]=' ';a[t]=' ';
			}
		}
		for(int i=0;i<si;++i){
			if(a[i]!=' ')cout<<a[i];
		}
		cout<<endl;
	}	
	return 0;
}
