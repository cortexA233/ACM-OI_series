#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,m,a[200009];
	int ju[200009];
	cin>>n;
	int s=m,nmi=0;
	vector<int> v;
	int mimax=1,mimaxv=-2000000000;
	for(int i=1;i<=n;++i){
		cin>>a[i];ju[i]=1;
		if(!a[i]){
			v.push_back(i);
		}
		if(a[i]<0){
			++nmi;
		}
		if(a[i]<0&&a[i]>mimaxv){
			mimax=i;
			mimaxv=a[i];
		}
	}
	int caozuo=0;
	int num0=v.size()-1;
	for(int i=0;i<num0;++i){
		cout<<1<<" "<<v[i]<<" "<<v[i+1]<<endl; ++caozuo;
		ju[v[i]]=0;
	}
	num0=1; if(v.size()==0) num0=0;
	
	if(nmi%2){
		if(num0){
			cout<<1<<" "<<mimax<<" "<<v[v.size()-1]<<endl;
			++caozuo;
			ju[mimax]=0;
			if(caozuo<n-1){
				cout<<2<<" "<<v[v.size()-1]<<endl;
		    	ju[v[v.size()-1]]=0;
			}
		}else{
			cout<<2<<" "<<mimax<<endl;
			ju[mimax]=0;
		}
	}else{
		if(num0){
			if(caozuo<n-1){
				cout<<2<<" "<<v[v.size()-1]<<endl;
		    	ju[v[v.size()-1]]=0;
			}
		}
	}
	v.clear();
	for(int i=1;i<=n;++i){
		if(ju[i]) v.push_back(i);
	}
	num0=v.size()-1;
	for(int i=0;i<num0;++i){
		cout<<1<<" "<<v[i]<<" "<<v[i+1]<<endl;
	} 
	return 0;
}
