#include<bits/stdc++.h>
using namespace std;
#define ll long long

int f[1009],n,k;
string a,b;

void getf(){
	int i=0,j=-1;
	f[0]=-1;
	while(i!=n){
		if(j==-1||b[i]==b[j]) f[++i]=++j;
		else j=f[j];
	} 
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>k;
	cin>>b;
	getf();
	cout<<b;
	for(int i=1;i<k;++i){
		for(int o=f[n];o<n;++o){
			cout<<b[o];
		}
	}
	return 0;
}
