#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n,a[1000];
	cin>>n;
	int fl=0;
	for(int i=0;i<n;++i){
		cin>>a[i];
		if(a[i]) fl=1;
	}
	if(fl) cout<<"HARD";
	else cout<<"EASY";
	return 0;
}
