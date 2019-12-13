#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	string a;
	cin>>a;
	int s=a.size();
	cout<<a;
	for(int i=s-1;i>=0;--i){
		cout<<a[i];
	}
	return 0; 
}
