#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int p;
		scanf("%d",&p);
		for(int i=0;i<p;++i){
			for(int o=0;o<p;++o){
			    printf("%d ",i*o);
			}printf("\n");
		}
		for(int i=0;i<p;++i){
			for(int o=0;o<p;++o){
				printf("%d ",i*o);
			}printf("\n");
		}
	}
	return 0;
}
