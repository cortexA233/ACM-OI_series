#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

long long npow(long long a,long long b){  //整数pow 
	long long s=1;
	for(int i=0;i<b;++i){
		s*=a;
	}
	return s;
}

long long qw(long long a){  //获得目标整数的位数 
	if(!a) return 1;
	long long s=0;
	while(a){
		a/=10;
		++s;
	}
	return s;
}

int main(){
	long long a1,b1,b3=0,a3=0;  //a3,b3记录小数部分的数值 
	char c,a2[15],b2[15];     //a2,b2记录小数部分的字符 
	scanf("%lld%c%s",&a1,&c,&a2);
	scanf("%lld%c%s",&b1,&c,&b2);  
	long long n=npow(10,9);
	for(int i=0;i<strlen(a2);++i){
		a3+=(a2[i]-'0')*npow(10,8-i);
	}
	for(int i=0;i<strlen(b2);++i){
		b3+=(b2[i]-'0')*npow(10,8-i);
	}
	a1*=n;b1*=n;
	a1+=a3;b1+=b3;
	long long s=a1%b1;
	if(!s){
		cout<<0;
		return 0;
	}
	string s1=to_string(s);
	if(s1.size()>=10){
		for(int i=0;i<s1.size();++i){
			cout<<s1[i];
			if(i==s1.size()-10)cout<<".";
		}
	}else{
		cout<<"0.";
		for(int i=0;i<9;++i){
			if(i<9-s1.size()){
				cout<<0;
			}else{
				cout<<s1[i-9+s1.size()];
			}
		}
	}
	return 0;
}
