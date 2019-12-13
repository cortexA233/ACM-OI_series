#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll find(ll n,ll p,ll lef,ll rig){
	if(lef==rig)return lef;
	ll te=(rig-lef+1)/2;
	if(p>=lef+te){
		return rig+lef-find(n,p,lef+te,rig);
	}else{
		return rig+lef-find(n,p,lef,lef+te-1);
	}
/*	while(lef!=rig){
	//	cout<<lef<<" "<<rig<<" "<<a<<endl;
		a=rig-a+1;
		if(a>=(lef+rig)/2){
			lef=(lef+rig)/2+1;
		}
		else{
			rig=(lef+rig)/2;
		}
	}
	return lef;*/
}

int main(){
	ll n,p;
	int t;
	cin>>t;
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	while(t--){
		cin>>n>>p;
		cout<<find(n,p,1,n)<<endl;
	}
	return 0;
}
