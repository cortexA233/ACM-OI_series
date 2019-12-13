#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	for(int i=1;i<n;i+=3){
		cout<<i<<" ";
	}
	return 0;
} 
