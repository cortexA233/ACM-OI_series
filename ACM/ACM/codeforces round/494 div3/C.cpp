#include<iostream>
#include<algorithm>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
	int n,k;
	double a[10000],p[10000],s[10000]={0};
	cin>>n>>k;
	cin>>a[1];s[1]=a[1];
	for(int i=2;i<=n;++i){
		cin>>a[i];s[i]=s[i-1]+a[i];
	}
	double maxn=0,sum;
	for(int i=k;i<=n;++i){
		for(int o=i;o<=n;++o){
			sum=s[o]-s[o-i];
			sum/=i;
		//	cout<<sum<<endl;
			if(sum>maxn) maxn=sum;
		}
	}
	printf("%.7lf",maxn);
	return 0;
}
