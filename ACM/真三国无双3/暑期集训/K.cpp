#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

int fac(int a){
	if(!a) return 1;
	int s=1;
	for(int i=1;i<=a;++i){
		s*=i;
	}
	return s;
}

int main(){
	int t,n;
	char s[30];
	cin>>t;
	while(t){
		int a[30]={0};
		--t;
		scanf("%d",&n);
		scanf("%s",s);
		for(int i=0;i<n;++i){
			++a[s[i]-'a'];
		}		
		if(!(n%2)){
			int flag=1,s=0;
			for(int i=0;i<26;++i){
			    s+=a[i]/2;
				if(a[i]%2) flag=0;
			}
			if(!flag){
				cout<<0<<endl;
				continue;
			}
			s=fac(s);
			for(int i=0;i<26;++i){
			    s/=fac(a[i]/2);
			}
			cout<<s<<endl;
		}else{
			int flag=0,s=0;
			for(int i=0;i<26;++i){
			    s+=a[i]/2;
				if(a[i]%2){
					flag++;
					--a[i];
				} 
			}
			if(flag>1){
				cout<<0<<endl;
				continue;
			}
			s=fac(s);
			for(int i=0;i<26;++i){
			    s/=fac(a[i]/2);
			}
			cout<<s<<endl;
		}
	}
	return 0;
}
