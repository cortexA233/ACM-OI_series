#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;

int main(){
	int w,d;
	int h1[100],h2[100];
	while(cin>>w>>d){
		int j1[100]={0},j2[100]={0};
		if(w==0&&d==0) break;
		int s=0;
		for(int i=0;i<w;++i){
			cin>>h1[i];
			s+=h1[i];
		}
		for(int i=0;i<d;++i){
			cin>>h2[i];
		}
		for(int i=0;i<w;++i){
			for(int o=0;o<d;++o){
				if(h1[i]==h2[o]&&!j1[i]&&!j2[o]){
					j1[i]=1;j2[o]=1;
				}
			}
		}
		for(int i=0;i<d;++i){
			if(!j2[i])s+=h2[i];
		}
		cout<<s<<endl;
	}
	return 0;
} 
