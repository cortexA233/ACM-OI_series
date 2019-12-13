#include<bits/stdc++.h>
using namespace std;

struct st{
	string s;
	int x;
};

int cmp(st a,st b){
	return a.x<b.x;
}

st a[300009];

int main(){
	ios::sync_with_stdio(false);
	int n,d,k;
	cin>>n>>d>>k;
	
	for(int i=0;i<n;++i){
		cin>>a[i].s>>a[i].x;
	}
	sort(a,a+n,cmp);
	int ans=0,n1=n-1,fl=1;
	while(d>0){
		if(ans>k){
			fl=0;break;
		}
		d-=a[n1].x;
		--n1;++ans;
	}
	if(ans>k) fl=0;
	if(!fl){
		cout<<"impossible"<<endl;
		return 0;
	}
	cout<<ans<<endl;
	for(int i=1;i<=ans;++i){
		cout<<a[n-i].s<<", YOU ARE FIRED!"<<endl;
	}
	return 0;
}
