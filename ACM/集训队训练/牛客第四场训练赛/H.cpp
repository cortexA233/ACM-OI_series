#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;

int main(){
	int a[]={1,2,3,4,5,6,7,8};
	for(int i=0;i<8;++i){
		cout<<a[i];
		if(i!=7)printf(" ");
	}cout<<endl;
	while(next_permutation(a,a+8)){
		for(int i=0;i<8;++i){
			printf("%d",a[i]);
			if(i!=7)printf(" ");
		}printf("\n");
	}
	return 0;
}
