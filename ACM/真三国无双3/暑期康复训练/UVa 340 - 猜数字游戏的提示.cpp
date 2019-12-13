#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;

int main(){
    int n,a[1000],time=1,g[1000],right,wrong,exit,r[1000];
    while(scanf("%d",&n)==1){
    	printf("Game ");printf("%d:\n",time);++time;
    	for(int i=0;i<n;++i){
    		scanf("%d",&a[i]);
		}
		while(1){
			exit=0;right=wrong=0;
			for(int i=0;i<n;++i){
    	    	scanf("%d",&g[i]);
		    }
		    for(int i=0;i<n;++i){
    	    	if(g[i]!=0){
    	    		exit=1;
				}
		    }
		    if(!exit){
		    	break;
			}
			for(int i=0;i<n;++i){
    	    	r[i]=0;
		    }
			for(int i=0;i<n;++i){
				for(int o=0;o<n;++o){
					if(g[o]==a[i]&&i==o){
						++right;
						r[i]=1;	r[o]=1;
					}
				}
			}
			for(int i=0;i<n;++i){
				for(int o=0;o<n;++o){
					if(g[o]==a[i]&&i!=o&&r[i]==0&&r[o]==0){
						++wrong;
					}
				}
			}
			printf("(%d,%d)\n",right,wrong);
		}
	}
	return 0;
}
