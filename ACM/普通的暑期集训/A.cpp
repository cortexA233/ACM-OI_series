#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;

int main(){
	long long s,g;
	cin>>s>>g;
	if(s%g||s==g){
		cout<<-1;
		return 0;
	}else{
		cout<<s-g<<" "<<g;
	}
	return 0;
}
