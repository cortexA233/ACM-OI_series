#include<bits/stdc++.h>
using namespace std;

const int N=1e3+!0;
int is[N];
int prime[N];
int cnt=0;
int num[N];

void getp(){
	memset(is,1,sizeof(is));
	memset(prime,0,sizeof(prime));
	for(int i=2;i*i<N;++i){
		if(is[i]){
		    for(int o=2*i;o<N;o+=i){
		    	is[o]=0;
			}
		}
	}
	for(int i=2;i<N;++i){
		if(is[i]){
			prime[cnt++]=i;
		}
	}
}

int cmp(int a,int b){
	if(num[a]!=num[b]) return num[a]<num[b];
	return a>b;
}

int main(){
	getp();
	
	int a[N];a[1]=1;
	for(int i=2;i<N;++i){
		a[i]=i;
		int n=i,ans=1;
		for(int o=0;o<cnt;++o){
			int sum=0;
			while(n%prime[o]==0){
			    n/=prime[o];
				++sum;
	    	}
	    	ans*=(sum+1);
		}
		if(n>1) ans*=2;
		num[i]=ans;
	}
	sort(a+1,a+1+1000,cmp);
/*	for(int i=2;i<100;++i){
		cout<<i<<" "<<num[i]<<endl;
	}*/
	int n;
	int t;
	cin>>t;
	int t1=t;
	while(t--){
		int n;
		cin>>n;
		printf("Case %d: %d\n",t1-t,a[n]);
	} 
	return 0;
} 
