#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<string>
using namespace std;

long long a[100009];
int t,n;
const long long yu=1000000007;

int main(){
	cin>>t;
	while(t){
		--t;
		scanf("%d",&n);
		for(int i=0;i<n;++i){
			scanf("%lld",&a[i]);
		}
		long long s=1;
		for(int i=0;i<n;++i){
			s=((s%yu)*((a[i]+1)%yu))%yu;
		}
		--s;
		if(s<0) s+=yu;
		cout<<s<<endl;
	}
	return 0;
}
