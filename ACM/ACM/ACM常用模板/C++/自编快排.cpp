#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int a[1000],f[1000],b[1000];

void ksort(int l,int r){
	if(l==r)return ;
	int t=a[l],nf=0,nb=0;
	for(int i=l;i<=r;++i){
		if(a[i]<t){
			f[nf]=a[i];++nf;
		}
		if(a[i]>=t){
			b[nb]=a[i];++nb;
		}a[l+nf]=t;
		for(int i=l;i<l+nf;++i){
			a[i]=b[i-l-nf-1];
		}
		
	}
}

int main(){
	
	return 0;
}
