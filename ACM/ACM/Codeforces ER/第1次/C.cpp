#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
#include<queue>
#include<cstdio>
using namespace std;

int main(){
	int j[200009],n,a[200009];
	char c[200009];
	cin>>n;
	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
	}
	scanf("%s",c);
	for(int i=0;i<n-1;++i){
		j[i]=c[i]-'0';
	}
	int jud=1;
	for(int i=0;i<n;++i){
		for(int o=i;o<n;++o){
			if(a[o]<a[i]){
				for(int p=i;p<o-1;++p){
					if(!j[p]){
				        jud=0;
						break;	
					}
				}
			}
		}
	}
	if(jud)cout<<"YES";
	else cout<<"NO";
	return 0;
}
