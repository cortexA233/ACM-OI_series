#include<iostream>
#include<algorithm>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
	int a,b,x,ans[10000];
	cin>>a>>b>>x;
	int po=0,size=a+b,cu;
	if(a>b){
		ans[po]=0;++po;--a;cu=0;
	}
	else{
		ans[po]=1;++po;--b;cu=1;
	}
	while(a>0||b>0||x>0){
		if(x>1){
			if(cu&&a>0){
				ans[po]=0;cu=0;--a;
			}else if(b>0){
				ans[po]=1;cu=1;--b;
			}
			++po;x-=1;
		}else{
			if(x==1){
				if(cu==1){
					while(b){
						ans[po]=1;--b;++po;
					}
					--x;
					while(a){
						ans[po]=0;--a;++po;
					}
				}
				if(!cu){
					while(a){
					    ans[po]=0;--a;++po; 
					}					
					--x;
					while(b){
						ans[po]=1;--b;++po;
					}
				}
		   	}
		   	if(!x){
		   	    if(cu==1){
				    while(b){
						ans[po]=1;--b;++po;
					}
				}	
				if(!cu){
				    while(a){
						ans[po]=0;--a;++po;
					}
				}
			}
		}
	}
	for(int i=0;i<size;++i){
		cout<<ans[i];
	}
	return 0;
}
