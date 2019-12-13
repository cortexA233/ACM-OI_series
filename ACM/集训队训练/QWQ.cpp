#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;

int main(){
	char temp;
	string a;
	int t1=0,t,s,ans,nw[109],nq[109];
	cin>>t;
	while(t1<t){	
		ans=0;s=0;
		cin>>a;
		s=a.size(); 
		for(int i=0;i<s;++i){
			nw[i]=0;nq[i]=0;
		}
		for(int i=0;i<s;++i){
			if(a[i]=='Q'){
				for(int o=i+1;o<s;++o){
					if(a[o]=='A'){
						++nw[i];
					}
				}
			}
		}
		for(int i=0;i<s;++i){
			if(a[i]=='A'){
				for(int o=i+1;o<s;++o){
					if(a[o]=='Q'){
						++nq[i];
					}
				}
			}
		}
		for(int i=0;i<s;++i){
			if(a[i]=='Q'){
				for(int o=i;o<s;++o){
					ans+=nq[o];
				}
			}
		}
		++t1;
		printf("Case #%d: %d\n",t1,ans);	
	}
	return 0;
}
