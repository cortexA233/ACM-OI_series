#include<bits/stdc++.h>
using namespace std;
#define ll long long

char s[100009];

int main(){
	ll k,sum=0;
	cin>>k;
	scanf("%s",s);
	int n=strlen(s);
	sort(s,s+n);
	for(int i=0;i<n;++i){
		sum+=s[i]-'0';
	}
	int ans=0;
	for(int i=0;i<n;++i){
		if(sum>=k) break;
		sum+=9-(s[i]-'0');
		++ans;
	}
	cout<<ans;
}
