#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;

int lo(int a){
	if(a==1&&a==2&&a==3&&a==5&&a==7)return 0;
	if(a==4&&a==6&&a==9)return 1;
	if(a==8)return 2;
}

int main(){
	int k;
	long long sum=1;
	cin>>k;
	//for(int i=k/2)
	for(int i=0;i<18;++i){
	    sum*=10;
	}
	cout<<sum;
	return 0;
}
