#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int gcd(int a,int b){
	int t;
	if(a==0||b==0)return -1;
	if(a<b){
		t=a;
		a=b;
		b=t;
	}
	while(a%b){
		t=b;
		b=a%b;
		a=t;
	} 
	return b;
} 

int main(){
	int t,n;
	cin>>t;
	string a;
	while(t){
		int ac=0;
		--t;
		cin>>n;
		for(int i=0;i<n;++i){
			cin>>a;
			if(a.size()==5){
				if(a[1]=='+'){
				    if(a[0]-'0'+a[2]-'0'==a[4]-'0')++ac;
		    	}
		    	if(a[1]=='-'){
		       		if(a[0]-'0'-(a[2]-'0')==a[4]-'0')++ac;
	    		}
			}
		}
		int g=gcd(ac,n);
		if(g==-1){
			cout<<ac<<'/'<<n;
			return 0;
		}
		ac=ac/g;
		n=n/g;
		cout<<ac<<'/'<<n;
	}
	return 0;
}
