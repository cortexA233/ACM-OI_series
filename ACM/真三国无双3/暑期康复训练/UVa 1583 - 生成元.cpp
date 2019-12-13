#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int a[1000001],ans[1000001];
	
int wei(int a){
	int s=0;
	while(a>=1){
		s+=a%10;
		a=a/10;
	}
	return s;
}

int main(){
	int n;
	for(int i=0;i<1000001;++i){
		ans[i]=0;
	}
	for(int i=0;i<1000001;++i){
		if(ans[i+wei(i)]==0){
			ans[i+wei(i)]=i;
		}
	}
	while(scanf("%d",&n)==1){
		printf("%d\n",ans[n]);
	}
	return 0;
}
