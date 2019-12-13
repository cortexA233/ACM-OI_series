#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

struct buy{
	int p;
	int q;
};

buy b[1009];

bool cmp(buy a,buy b){
	return a.q>b.q;
}

int main(){
	int n,m,a[1009];
	long long sum=0;
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	for(int i=0;i<m;++i){
		cin>>b[i].p>>b[i].q;
	}
	sort(b,b+m,cmp);
	for(int i=0;i<m;++i){
		if(a[b[i].p]){
			sum+=a[b[i].p]*b[i].q;
			a[b[i].p]=0;
		}
	}
	cout<<sum<<endl;
	return 0;
}
