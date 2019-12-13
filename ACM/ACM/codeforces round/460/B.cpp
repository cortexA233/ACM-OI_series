#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<cstdio>
using namespace std;

int qw(long long a){
	int ans=0;
	while(a){
		ans+=a%10;
		a/=10;
	}
	return ans;
}

int main(){
	int n,c=1;
	long long i=19;
	cin>>n;
	while(c!=n){
		++c;
		++i;
		while(qw(i)!=10){
			++i;
		}
	}
	cout<<i;
	return 0;
}
