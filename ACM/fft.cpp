/*  programmed by Wang Mengxiang from Shanghai University  */
#include<iostream>
#include<string>
#include<cstring>
#include<complex>
#include<algorithm>
#include<cmath>
using namespace std;
#define cp complex<double>
#define N 140004 
const double pi=acos(-1.0);

void fft(cp *a,int n,int in){
	if(n==1) return ;
	int m=n/2;   
	static cp buf[N]; 
	for(int i=0;i<m;++i){
		buf[i]=a[2*i];
		buf[i+m]=a[2*i+1];
	}
	for(int i=0;i<n;++i) a[i]=buf[i];
	fft(a,m,in);
	fft(a+m,m,in);
	for(int i=0;i<m;++i){
		cp x=cp(cos(2*pi*i/n),sin(2*pi*i/n));
		if(in) x=conj(x);
		buf[i]=a[i]+x*a[i+m];
		buf[i+m]=a[i]-x*a[i+m];
	}
	for(int i=0;i<n;++i){
		a[i]=buf[i];
	}
}

char a2[N],b2[N];
char a1[N],b1[N];
cp a[N],b[N];

int main(){
    int n,xxx;
    cout<<"请输入两个乘数："; 
	while(~scanf("%s%s",a1,b1)){
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		int res[N]={0};
		int sa=strlen(a1),sb=strlen(b1);
	    int i1=0,i2=0;
	    while(a1[i1]=='0')++i1;
	    while(b1[i2]=='0')++i2;
	    for(int i=i1;i<sa;++i) a2[i-i1]=a1[i];a2[sa-i1]='\0';
	    for(int i=i2;i<sb;++i) b2[i-i2]=b1[i];b2[sb-i2]='\0';
	    sa=strlen(a2),sb=strlen(b2);
		n=max(sa,sb);
		int n1=1;
		while(n>n1) n1<<=1;
		n=n1<<1;
		for(int i=0;i<sa;++i){
			a[n-sa+i]=a2[i]-'0';
		}
		for(int i=0;i<sb;++i){
			b[n-sb+i]=b2[i]-'0';
		}
		for(int i=0;i<n/2;++i){
			cp t;
			t=a[i];a[i]=a[n-i-1];a[n-i-1]=t;
			t=b[i];b[i]=b[n-i-1];b[n-i-1]=t;
		}
		fft(a,n,0);
		fft(b,n,0);
		for(int i=0;i<n;++i){
			a[i]*=b[i];
		}
		fft(a,n,1);
		for(int i=0;i<n;++i){
			res[i]+=a[i].real()/n+0.5;
			res[i+1]+=res[i]/10;
			res[i]%=10;
		}
	    for(int i = res[sa + sb - 1] ? sa + sb - 1: sa + sb - 2; i >= 0; i--)
	        cout<<res[i];
	    cout<<endl;	
	    cout<<"请输入两个乘数："; 
	}
	return 0;
}


