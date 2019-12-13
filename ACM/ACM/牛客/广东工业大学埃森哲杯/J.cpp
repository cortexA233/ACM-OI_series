#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
using namespace std;

int a[100009];
int n,sum;

int main(){
	int t;
	cin>>t;
	while(t){
		sum=0;
		--t; 
		cin>>n;
		for(int i=0;i<n;++i){
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		for(int i=1;i<n;++i){
			sum=sum+a[i]-a[0];
		}
		cout<<sum<<" "<<sum+a[0]<<endl;
	}
	return 0;
}
