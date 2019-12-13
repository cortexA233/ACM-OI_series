#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<string>
#include<cstring>
#include<map>
using namespace std;

int main(){
	char a[200005];
	scanf("%s",a);
	int n=strlen(a);
	int ans=0;
	int sum=0;
	for(int i=0;i<n;++i){
		sum+=a[i]-'0';
		if((sum%3)==0){
			++ans;
			sum=0;
		}else{
			if(sum%3==1){
				if(((sum+a[i+1]-'0')%3)==0){
			    	++ans;sum=0;i+=1;continue;
		    	}
		    	if(((sum+a[i+1]-'0'+a[i+2]-'0')%3)==0){
			    	++ans;sum=0;i+=2;continue;
		    	}
		    	if((a[i+1]-'0')%3==0){
					sum=0;continue;
				}
			}else{
				if(((sum+a[i+1]-'0')%3)==0){
			    	++ans;sum=0;i+=1;continue;
		    	}
		    	if(((sum+a[i+1]-'0'+a[i+2]-'0')%3)==0){
			    	++ans;sum=0;i+=2;continue;
		    	}	
		    	if((a[i+1]-'0')%3==0){
					sum=0;continue;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
