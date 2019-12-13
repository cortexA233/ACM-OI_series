#include<bits/stdc++.h>
#include<complex>
using namespace std;
#define cp complex<double> 
#define N 140000

const double pi=acos(-1.0); 
cp a[N]={0}, b[N]={0};
char a1[N],b1[N],a2[N],b2[N];

void fft(cp *a,int n,int inv){
	if(n==1) return ;
	int m=n/2;
	static cp buf[N];
	for(int i=0;i<m;++i){
		buf[i]=a[2*i];
		buf[i+m]=a[2*i+1];
	}
	for(int i=0;i<n;++i) a[i]=buf[i];
	fft(a,m,inv);
	fft(a+m,m,inv);
	for(int i=0;i<m;++i){
		cp x=cp(cos(2*pi*i/n),sin(2*pi*i/n));
		if(inv) x=conj(x);
		buf[i]=a[i]+x*a[i+m];
		buf[i+m]=a[i]-x*a[i+m];
	}
	for(int i=0;i<n;++i){
		a[i]=buf[i];
	}
}
/*
int main(){
	int xxxx;
	cin>>xxxx;
	scanf("%s%s",a1,b1);
	
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
    int n=1;
    int n1=max(sb,sa);
    cout<<n1<<endl;
    while(n<n1){
    	n<<=1;
	}
    n<<=1;
	cout<<n<<endl;
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
		a[i]*=b[i];//cout<<a[i]<<" ";
	}//cout<<endl;
	fft(a,n,1);
	for(int i=0;i<n;++i){
		res[i]=(a[i].real()/n+0.5);
		res[i+1]+=res[i]/10;
		res[i]%=10;
	}
	for(int i=0;i<n;++i){
		cout<<res[i];
	}cout<<endl;
	for(int i=res[sa+sb-1]?sa+sb-1:sa+sb-2;i>=0;--i){
		cout<<res[i];
	}
	cout<<endl;
	return 0;
}
*/
int main(){
    int n,xxx;
	while(~scanf("%d%s%s",&xxx,a1,b1)){
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
	//	cout<<a2<<" "<<b2<<endl;
		int n1=1;
		while(n>n1) n1<<=1;
		n=n1<<1;
		for(int i=0;i<sa;++i){
			a[n-sa+i]=a2[i]-'0';
		}
		for(int i=0;i<sb;++i){
			b[n-sb+i]=b2[i]-'0';
		}
	/*	for(int i=0;i<n;++i){
	    	cout<<a[i]<<" ";
    	}cout<<"!!"<<endl;*/
		for(int i=0;i<n/2;++i){
			cp t;
			t=a[i];a[i]=a[n-i-1];a[n-i-1]=t;
			t=b[i];b[i]=b[n-i-1];b[n-i-1]=t;
		}
	/*	for(int i=0;i<n;++i){
	    	cout<<a[i]<<" ";
    	}cout<<"!!"<<endl;*/
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
	}
	return 0;
}
