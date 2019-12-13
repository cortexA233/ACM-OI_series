#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;

int n,m,a1=0,b1=0,c1=0;
long long a[1000009],b[1000009],c[1000009];

int main(){
	while(cin>>n>>m){
		a1=0,b1=0,c1=0;
		for(int i=0;i<n;++i){
			scanf("%lld",&a[i]);
		}
		for(int i=0;i<m;++i){
			scanf("%lld",&b[i]);
		}--n;--m;
		while(a1<=n&&b1<=m){
			while(a[a1]!=b[b1]&&a1<=n&&b1<=m){
				if(a[a1]<b[b1])++a1;
				else ++b1;
			}
			if(a[a1]==b[b1]&&a1<=n&&b1<=m){
				c[c1]=a[a1];++c1;++a1;++b1;
			}
			
		}
		if(!c1){
			printf("empty\n");continue;
		}
		for(int i=0;i<c1;++i){
			printf("%lld",c[i]);
			if(i!=c1-1)printf(" ");
		}cout<<endl;
	}
	return 0;
}
