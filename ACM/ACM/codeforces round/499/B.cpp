#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> sum ;

int main(){
	ll n,m;
	ll a[10009]={0};
	ll num[1009]={0};
	cin>>n>>m;
	if(n>m){
		cout<<0;
		return 0;
	}
	for(ll i=0;i<m;++i){
		cin>>a[i];
		++num[a[i]]; 
	}
	sort(num,num+101);
	for(ll i=0;i<101;++i){
		if(num[i]) sum.push_back(num[i]);
	}
	int numb=n-1;
	while(sum.size()<n){
		if(sum[numb]<sum[numb-1]){
			--numb;
		}
		sum.push_back(1);
		--sum[numb];
	}
	int si=sum.size();
    sort(sum.begin(),sum.end());
    for(int i=0;i<si;++i){
    	cout<<sum[i]<<" ";
	}cout<<endl;
	if(sum[si-1]/2>sum[0]){
		cout<<sum[si-1]/2;
	}else{
		cout<<sum[0];
	}
	return 0;
}
