#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ldd long double

ll n;

int main(){
	int fibo[30]={0};fibo[1]=1;
	for(int i=2;i<30;++i)
		fibo[i]=fibo[i-1]+fibo[i-2];
	while(cin>>n){		
		if(n<=20){
			printf("%d\n",fibo[n]);
			continue;
	    }
	    ldd ans=log10(sqrt(5)/5.0)+(n*1.0*log10((sqrt(5)+1)/2));
	    ll anum=ans;
	    ans-=(ldd)anum;
	    ans=pow(10,ans);
	    cout<<(ll)(ans*1000)<<endl;
	}
	return 0;
}
