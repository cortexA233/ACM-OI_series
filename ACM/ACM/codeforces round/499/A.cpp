#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,k;
	ll a[10009]={0},sum=0;
	cin>>n>>k;
	string s;
	cin>>s;
	sort(s.begin(),s.end());
//	cout<<s<<endl;
	for(int i=0;i<n;++i){
	//	for(int o=0;o<26;++o) cout<<a[o]<<" ";
	//	cout<<endl;
		if(a[s[i]-'a']==0){
	//		cout<<a[s[i]]<<endl;
			a[s[i]-'a'+1]=1;
			sum+=s[i]-'a'+1;
			--k;
		}
		if(!k) break;
	}
	if(k) cout<<-1;
	else cout<<sum;
	return 0;
}
