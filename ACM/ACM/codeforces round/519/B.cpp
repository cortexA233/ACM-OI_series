#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a[10000];
	cin>>n;
	a[0]=0;
	int c[10000]={0};
	for(int i=1;i<=n;++i){
		cin>>a[i];
		c[i-1]=a[i]-a[i-1];
	}
	int ans[10000],fl,sum=0,cnt=0;
	for(int i=1;i<=n;++i){
		fl=1;
		for(int o=0;o<n;++o){
			if(c[o]!=c[o%i]){
				fl=0;break;
			}
		}
		if(fl){
			ans[cnt++]=i;
		}
	}
	cout<<cnt<<endl;
	for(int i=0;i<cnt;++i){
		cout<<ans[i]<<" ";
	}
	return 0;
}
