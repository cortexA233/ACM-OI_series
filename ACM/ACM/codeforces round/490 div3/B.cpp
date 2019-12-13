#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;

int gmax(int a,int b){
	if(a>b)return a;
	return b;
}

int di[100],num=0;
string t,s;

void gd(int a){
	int s=1;
	int lim=sqrt(a);
	while(s<=lim){
		if(!(a%s)){
			if(s!=a/s){
				di[num]=s;di[num+1]=a/s;
		        num+=2;
			}else{
				di[num]=s;++num;
			}
		}
		++s;
	}
}

void rev(int a){
	char c;
	for(int i=0,j=a-1;i<j;--j,++i){
		c=t[i];
		t[i]=t[j];
		t[j]=c;
	}
}

int main(){
	int n;
	cin>>n;
	cin>>t;
	gd(n);
	sort(di,di+num);
	for(int i=0;i<num;++i){
		rev(di[i]);
	}
	cout<<t; 
	return 0;
}








