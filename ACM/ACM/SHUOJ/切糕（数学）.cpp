#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int t,n,s=0;

void cut(int a){
	if(a==1){
		return;
	}else{
		if(a%2!=0){
			--a;
			s+=a;
		}
		a=a/2;
		s+=a*a;
		cut(a);cut(a);
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin>>t;
	while(t){
		--t;
		cin>>n;
		if(n==1){
			cout<<"Mission Complete!\n";
		}else{
			cut(n);
			cout<<"Needs at least "<<s<<" ATP!\n";
		}
		s=0;
	}
	return 0;
} 

