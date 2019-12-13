#include<iostream>
#include<cstring>
#include<algorithm>
#include<string>
#include<queue>
#include<cstdio>
using namespace std;

int main(){
	long long t,n;
	cin>>t;
	while(t){
		int sum=0;
		--t;
		cin>>n;
		while(n>1){
			if((n%10)==7){
				++sum;
			} 
			n=n/10;	
		}
		cout<<sum<<endl;
	}
	return 0;
}
