#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<cstdio>
#include<cmath>
using namespace std;

string a;
int n,ss=0,s[109];

int iv(char a){
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='y'){
	    return 1;
	}
	return 0;
}

void de(int b){
	for(int i=b;i<n-1;++i){
		a[i]=a[i+1];
	}
	--n;
}

int ju(){
	for(int i=0;i<n-1;++i){
		if(iv(a[i])&&iv(a[i+1])){
			return 1;
		}
	}
	return 0;
}

int main(){
	cin>>n;
	cin>>a;
	while(ju()){
		for(int i=0;i<n-1;++i){
			if(iv(a[i])&&iv(a[i+1])){
				de(i+1);
			}
		}
	}
	for(int i=0;i<n;++i){
		cout<<a[i];
	}
	return 0;
} 
