#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring> 
#include<queue>
using namespace std;

int main(){
	int n,d,a[1000];
	cin>>n>>d;
	for(int i=0;i<n;++i){
		cin>>a[i];
	} 
	int sum=2;
	sort(a,a+n);
	for(int i=1;i<n;++i){
		if(a[i]-a[i-1]>2*d){
			sum+=2;
		}else if(a[i]-a[i-1]==2*d){
			sum+=1;
		}
	}
	cout<<sum;
	return 0;
}
