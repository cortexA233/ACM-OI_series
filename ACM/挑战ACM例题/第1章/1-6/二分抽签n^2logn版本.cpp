#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<set>
using namespace std;

int a[100],s[10000],n,m,c=0,p,ans=0;

int se(int k,int be,int en){
	int t;
	while(be<en){
		t=(be+en)/2;
		if(s[t]==k)return 1;
		if(k<s[t])en--;
		if(k>s[t])be++;
	}
	return 0;
}

int main(){
	cin>>n>>m;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	for(int i=0;i<n;++i){
		for(int o=0;o<n;++o){
			s[c]=a[i]+a[o];++c;
		}
	}
	for(int o=0;o<c;++o){
		cout<<s[o]<<" ";
	}cout<<endl;
	sort(s,s+c);
	for(int i=0;i<n;++i){
		if(ans)break;
		for(int o=0;o<n;++o){
			p=m-a[i]-a[o];
			if(se(p,0,c-1))ans=1;
		}
	}
	cout<<ans;
	return 0;
}
