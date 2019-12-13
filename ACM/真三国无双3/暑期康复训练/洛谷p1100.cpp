#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
	int n,t,s=0;
	string ans;
	cin>>n;t=n; 
	
	while(t>0){
		ans.push_back(t%2+'0');t/=2;++s;
	}
	for(int i=s-1;i>=0;--i){
		cout<<ans[i];
	} 
	return 0;
} 
