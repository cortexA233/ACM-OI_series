#include<bits/stdc++.h>
using namespace std;

int a[100009],b[100009];

int ju(int x){
	while(x){
		if(x%2==0) return 0;
		x>>=1;
	}
	return 1;
}

int wei(int x){
	int s=0;
	while(x){
		++s;
		x>>=1;
	}
	return s;
}

int makb(int x){
	int s=1;
	for(int i=1;i<x;++i){
		s<<=1;
		s+=1;
	}
	return s;
}

int main(){
	int x;
	cin>>x;
//	cout<<wei(x)<<" "<<ju(x)<<endl;
//	cout<<makb(x)<<endl;
	int st=0;
	int t=0;
	int fl=0;
	int ans[1000];
	while(!ju(x)){
		int tem=makb(wei(x));
		ans[t++]=wei(x);
		x=x^tem;
	//	cout<<x<<" ";
		if(ju(x)){
			fl=1;
			break;
		}
		x+=1;
	//	cout<<x<<" ";
	}
//	cout<<endl;
	cout<<t*2-fl<<endl;
	for(int i=0;i<t;++i){
		cout<<ans[i]<<" ";
	}
	return 0;
} 
