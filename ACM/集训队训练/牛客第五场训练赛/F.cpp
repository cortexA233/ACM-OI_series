#include<iostream>
#include<algorithm>
using namespace std;

int qu(int a){
	int sum=0; 
	while(a>0){
		sum+=a%10;
		a=a/10;
	}
	return sum;
}

int main(){
	int n;
	cin>>n;
	while(n>10){
		n=qu(n);
	}
	cout<<n;
	return 0;
}
