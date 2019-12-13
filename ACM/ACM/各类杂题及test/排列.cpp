#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;

int main(){
	int a[10];
	for(int i=0;i<6;++i){
		a[i]=i;
	}
	for(int i=0;i<6;++i){
		cout<<a[i]<<" ";
	}cout<<endl;
	while(next_permutation(a,a+6)){
		cout<<endl;
		for(int i=0;i<6;++i){
			cout<<a[i]<<" ";
		}
	}
	return 0;
} 
