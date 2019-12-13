#include<bits/stdc++.h>
#include <complex>
using namespace std;
#define cp complex<double>
const double pi=acos(-1.0);
#define N 17640000 

int n;
cp omg[N],inv[N];

void ini(){
	for(int i=0;i<n;++i){
		omg[i]=cp(cos(2*pi*i/n),sin(2*pi*i/n));
		inv[i]=conj(omg[i]);
	}
}

void fft(cp *a,cp *omg){
	int lim=0;
	while((1<<lim)<n) ++lim;
	for(int i=0;i<n;++i){
		int t=0;
		for(int o=0;o<lim;++o){
			if((i>>o)&1) t|=(1<<(lim-o-1));
		}
		if(i<t) swap(a[i],a[t]);
	}
	static cp buf[N];
	for(int l=2;l<=n;l*=2){
		int m=l/2;
		for(int o=0;o<n;o+=l){
			for(int i=0;i<m;++i){
				buf[i+o]=a[i+o]+omg[n/l*i]*a[i+o+m];
				buf[i+o+m]=a[i+o]-omg[n/l*i]*a[i+o+m];
			}
		}
		for(int i=0;i<n;++i){
			a[i]=buf[i];
		}
	}
}

char a2[N],b2[N];
char a1[N],b1[N];
cp a[N],b[N];

int main(){
    int xxx;
    
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
		ini();
	//	cout<<n<<endl;
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
	//	for(int i=0;i<n;++i) cout<<a[i]; cout<<endl;
   // 	for(int i=0;i<n;++i) cout<<b[i]; cout<<endl;
		fft(a,omg);
		fft(b,omg);
		for(int i=0;i<n;++i){
			a[i]*=b[i];
		} 
		fft(a,inv);
	//	for(int i=0;i<n;++i) cout<<a[i]<<" "; cout<<endl;
		for(int i=0;i<n;++i){
			res[i]+=floor(a[i].real()/n+0.5);
			res[i+1]+=res[i]/10;
			res[i]%=10;
		}
	    for(int i = res[sa + sb - 1] ? sa + sb - 1: sa + sb - 2; i >= 0; i--)
	        cout<<res[i];
	    cout<<endl;	
	}
	return 0;
}

