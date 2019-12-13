#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<queue>
using namespace std;

int main(){
	int n,m,s[110][110],t,a,b;
	cin>>t;
	while(t){
		--t;
		int sum=0;
		cin>>n>>m>>a>>b;
		
		for(int i=0;i<n;++i){
			for(int o=0;o<m;++o){
				scanf("%d",&s[i][o]);
				if(s[i][o]>b||s[i][o]<a){
					++sum;
				}
			}
		}
		if(a>b){
			cout<<"No Solution"<<endl;
			continue;
		}
		cout<<sum<<endl;
	}
	return 0;
}
