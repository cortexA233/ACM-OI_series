#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<string>
#include<cstring>
#include<map>
using namespace std;

int npow(int a){
	int s=1;
	for(int i=0;i<a;++i){
		s*=2;
	}
	return s;
}

map<int,int> vis;

int main(){
	int n;
	int a[200005];
	cin>>n;
	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
		vis[a[i]]++;
	}
	int flag;
	int ans=0;
	for(int i=0;i<n;++i){
		flag=0;
		for(int o=0;o<31;++o){
			int tmp=npow(o);
			if(tmp-a[i]==a[i]){
				if(vis[a[i]]>1) flag=1;
			}else{
				if(vis[tmp-a[i]]) flag=1;
			}
		}
		if(!flag) ++ans;
	}
	cout<<ans;
	return 0;
}
