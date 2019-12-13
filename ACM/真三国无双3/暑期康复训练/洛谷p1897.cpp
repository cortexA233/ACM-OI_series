#include<iostream>
#include<cmath>
#include<algorithm> 
#include<string>
#include<cstring>
#include<cstdio>
using namespace std;

int main(){
	int fl=0,n,a[200000],sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	if(a[0]){
		sum+=6*a[0]+6;fl=a[0];
	}else{
		++sum;
	}
	for(int i=1;i<n;++i){
		if(a[i-1]==a[i]){ 
			++sum;
		}else{
			sum+=6*(a[i]-fl)+6;fl=a[i];
		}
	}
	sum+=4*fl;
	printf("%d",sum);
	return 0;
}

