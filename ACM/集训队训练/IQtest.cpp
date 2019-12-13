#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
#include<cmath>
using namespace std;

int main(){
	int n;	
	double a[10];
	cin>>n;
	while(n>0){
		--n;
		cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5];
		if(a[2]-a[1]==a[3]-a[2]==a[4]-a[3]==a[5]-a[4]){
			cout<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<" "<<a[5]<<" "<<a[5]+a[2]-a[1]<<endl;
		}else{
			if(a[2]/a[1]==a[3]/a[2]==a[4]/a[3]==a[5]/a[4]){
		    	cout<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<" "<<a[5]<<" "<<a[5]*(a[2]/a[1])<<endl;
	    	}
		}
	}
	return 0;
}
