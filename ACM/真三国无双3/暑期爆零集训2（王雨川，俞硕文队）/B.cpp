#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;

int pre[1000];

int findx(int a){
	int r=a;
	while(r!=pre[r]){
		r=pre[r];
	}
	int i=a,j;
	while(i!=r){
		j=pre[i];
		pre[i]=r;
		i=j;
	}
	return r;
}

void join(int a,int b){
	int fa=findx(a),fb=findx(b);
	if(fa!=fb) pre[fa]=fb;
}

int main(){
	int n,x[1000],y[1000];
	cin>>n;
	for(int i=0;i<=n;++i){
		pre[i]=i;
	}
	for(int i=0;i<n;++i){
		cin>>x[i]>>y[i];
	} 
	for(int i=0;i<n;++i){
		for(int o=0;o<n;++o){
			if(x[i]==x[o]||y[i]==y[o]){
				join(i,o);
			}
		}
	}
	int ans=0;
//	sort(pre,pre+n);
	for(int i=0;i<n;++i){
		if(i==pre[i]) ++ans;
	} 
	cout<<ans<<endl;
	return 0;
} 
