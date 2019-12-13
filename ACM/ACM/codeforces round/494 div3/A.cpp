#include<iostream>
#include<algorithm>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
	int n,a[10000];
	cin>>n;
	if(n==1){
		cout<<1;return 0;
	}
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	sort(a,a+n);
	int num[10000]={0};
	num[0]=1;
	int t=0;
	for(int i=1;i<n;++i){
		if(a[i]==a[i-1]){
			++num[t];
		}else{
			++t; ++num[t];
		}
	}
    ++t;
	sort(num,num+t);
	cout<<num[t-1];
	return 0;
}
