#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;

int ju(char ch){
	if((ch>='0'&&ch<='9')||(ch>='a'&&ch<='f')){
		return 1;
	}
	return 0;
} 

long long cif(long long a,long long b){
	if(!b)return 1;
	long long s=1;
	for(int i=1;i<=b;++i){
		s*=a;
	}
	return s; 
}

int pr(char ch){
	if(ch>='0'&&ch<='9'){
		return ch-'0';
	}
	if(ch>='a'&&ch<='f'){
		return ch-'a'+10;
	}
}

int main(){
//	cout<<cif(4,3)<<" "<<cif(2,3);
    char a[100009];
    scanf("%s",&a);
    int si;
	for(int i=0;i<1000005;++i){
		if(a[i]!='\0'){
			continue;
		}else{
		    si=i+1;	
		    break;
		}
	}
	int o=0,judge=0;
	long long ans=0;
	int num[20]={0};
	for(int i=0;i<si-1;++i){
		if(a[i]=='0'&&a[i+1]=='x'){
			i=i+2;
		    o=0;ans=0;
		    while(ju(a[i])&&i<si){
		    	num[o]=pr(a[i]);
				++o;++i;
			}
			if(!o)continue;judge=1;
			for(int p=0;p<o;++p){
			//	cout<<num[p]<<" ";
		    	ans+=num[p]*cif(16,o-p-1);
	    	}
	    	cout<<ans<<" ";
		} 
	}
	if(!judge) cout<<-1;
	return 0;
}
