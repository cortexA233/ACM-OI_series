#include<bits/stdc++.h>
using namespace std;
#define ll long long

int ju(int a,int b,int c){
	if(a+b<=c) return 0;
	return 1;
}

int a[1000009];

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	while(cin>>n){
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		sort(a,a+n);
		int fl=0;
		for(int i=0;i<n-2;++i){
			if(ju(a[i],a[i+1],a[i+2])){
				fl=1;
				break;
			}
		}
		if(fl) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
} 
