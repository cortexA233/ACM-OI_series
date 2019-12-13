#include<iostream>
#include<cstring>
#include<algorithm>
#include<string>
#include<queue>
#include<cstdio>
using namespace std;

long long k,t,n,a[100009],b[100009];
	
struct d{
	double a;double b;double p;
};

d c[100009];

int cmp(d a1,d a2){
	return a1.p>a2.p;
}

int main(){
	
	cin>>t;
	while(t){
		cin>>n>>k;
		for(int i=0;i<n;++i){
			cin>>c[i].a>>c[i].b;
			c[i].p=c[i].b/c[i].a;
		}
		sort(c,c+n,cmp);
		for(int i=0;i<n;++i){
			cout<<c[i].p<<" ";
		}
		--t;
	}
	return 0;
}
