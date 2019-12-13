#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
	double r,pi=3.1415927;
	while(cin>>r){
		printf("%.3lf\n",r*r*r*pi*4/3);
	}
}
