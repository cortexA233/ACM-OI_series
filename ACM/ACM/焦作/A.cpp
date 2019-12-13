#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
//	getchar();
	while(t--){
		string a;
		cin>>a;
	//	getline(cin,a);
		for(int i=0;i<a.size();++i){
			if(a[i]>='A'&&a[i]<='Z'){
				a[i]+=32;
			}
		}
		if(a!="jessie") cout<<"Dare you say that again?"<<endl;
		else cout<<"Good guy!"<<endl;
	//	cout<<a<<endl;
	}
	return 0;
} 
