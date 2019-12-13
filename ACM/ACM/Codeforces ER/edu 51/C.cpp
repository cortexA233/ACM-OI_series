#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,b[1000]={0},a[1000];
    cin>>n;
    for(int i=0;i<n;++i){
    	cin>>a[i];
		++b[a[i]];
	}
	int nji=0;
	for(int i=0;i<200;++i){
		if(b[i]%2) ++nji;
	}
	if(nji%2){
		cout<<"NO";return 0;
	}
	cout<<"YES"<<endl;
	int mar[1000]={0},fl=0;;
	for(int i=0;i<200;++i){
		if(b[i]&&b[i]%2){
			if(fl) mar[i]=1;
	    	else mar[i]=0;
	    	fl=(~fl);
		}
	}
	int flj=0,flo=0;
//	for(int i=0;i<n;++i) cout<<mar[a[i]]<<" ";cout<<endl;
	for(int i=0;i<n;++i){
		if((b[a[i]]%2)&&mar[a[i]]){
			cout<<'A';--b[a[i]];continue;
		}
		if(!(b[a[i]]%2)&&mar[a[i]]){
			cout<<'B';--b[a[i]];continue;
		}
		if(!(b[a[i]]%2)&&!mar[a[i]]){
			cout<<'A';--b[a[i]];continue;
		}
		if(b[a[i]]%2&&!mar[a[i]]){
			cout<<'B';--b[a[i]];continue;
		}
	}
	return 0;
} 
/*
8
1 1 2 3 3 3 4 4

A B A B A B A B */
