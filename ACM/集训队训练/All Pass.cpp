#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
#include<cmath>
using namespace std;

int main(){
	int n;
	double p,a,b;
	cin>>n;
	while(n>0){
		--n;
		cin>>p>>a>>b;
	//	cout<<a*p/100+b*(100-p)/100<<endl;
		printf("%.1lf\n",a*p/100+b*(100-p)/100);
	}
    return 0; 
} 
