#include<iostream>
#include<cstdio>
#include<csting>
#include<algorithm>
using namespace std;

int main(){
	char a[5];
	while(cin>>a[0]>>a[1]>>a[2]){
		sort(a,a+3);
    	cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
	}
	return 0;
}
