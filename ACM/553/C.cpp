#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long

ll mo=1000000007;
ll np(ll a){
	ll s=1,r=2;
	while(a>0){
		if(a%2) s=(s*r)%mo;
		a>>=1;
		r=(r*r)%mo;
	}
	return s%mo;
}
ll inv(ll a){
	return np(mo-2);
}



int na(int a){
	int s=1;
	for(int i=0;i<a;++i) s*=2;
	return s;
}

int main(){
	ll l,r;
	cin>>l>>r;
	int a1=0,a2=0,b1=0,b2=0;
	int fl=0;
	for(int i=0;i<=l;){
	//	cout<<fl<<"! "<<a1<<" "<<a2<<endl;
		if(fl%2){//ou
			i+=na(fl);
			a2+=na(fl);
		} 
	    else{//ji
	        i+=na(fl);
	    	a1+=na(fl);
		}
		++fl;
	}
	if(a1+a2>l){
		if(fl%2){
			while(a1+a2>l) --a1;
		}else{
			while(a1+a2>l) --a2;
		}
	}
	cout<<"! "<<a1<<" "<<a2<<endl;
	
	fl=0;
	for(int i=0;i<=r;){
	//	cout<<fl<<"! "<<b1<<" "<<b2<<endl;
		if(fl%2){//ou
			i+=na(fl);
			b2+=na(fl);
		} 
	    else{//ji
	        i+=na(fl);
	    	b1+=na(fl);
		}
		++fl;
	}
	if(b1+b2>r){
		if(fl%2){
			while(b1+b2>r) --b1;
		}else{
			while(b1+b2>r) --b2;
		}
	}
	cout<<"! "<<b1<<" "<<b2<<endl;;
	
	ll ans11=((a1%mo)*((2*a1-2)%mo)*inv(2))%mo;
	ll ans12=((a2%mo)*((2*a2-1)%mo)*inv(2))%mo;
	ll ans21=((b1%mo)*((2*b1-1)%mo)*inv(2))%mo;
	ll ans22=((b2%mo)*((2*b2-1)%mo)*inv(2))%mo;
	ll ans=(ans21-ans11)%mo;
	ans=(ans+((ans22-ans12)%mo))%mo;
	cout<<ans<<endl;;
	return 0;
} 
