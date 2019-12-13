#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
	int n,a[104],sum=0;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	for(int i=0;i<n;++i){
		for(int o=0;o<n;++o){
			for(int p=0;p<n;++p){
				if(a[i]+a[o]>a[p]&&a[i]+a[p]>a[o]&&a[o]+a[p]>a[i]){
					if(i!=o&&i!=p&&o!=p){
						if(a[i]+a[o]+a[p]>sum){
							sum=a[i]+a[o]+a[p];
						}
					}
				}
			}
		}
	}
	cout<<sum;
	return 0;
}
