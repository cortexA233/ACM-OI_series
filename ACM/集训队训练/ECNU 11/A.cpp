#include<bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	cin>>a>>b;
	int n=a.size();
	int fl=1;
	string c;
	if(a<b){
		c=a;
		a=b;
		b=c;
	}
	c=b;
	c[n-1]++;
	while(c[n-1]>'Z'){
		c[n-1]='A';
		--n;
		c[n-1]++;
	}
	cout<<c;
	return 0;
}
