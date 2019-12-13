#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int getn(char a){
	return a-'a';
}

int num[10005][28];

int main(){
	int n,q,t,l,r;
	scanf("%d",&t);
	char a[10009],c;
	while(t){
		--t;
		scanf("%d%d",&n,&q);
		for(int i=0;i<n;++i){
			for(int o=0;o<27;++o){
				num[i][o]=0;
			}
		}
		scanf("%s",a);
		num[0][getn(a[0])]=1;
		for(int i=1;i<n;++i){
			for(int o=0;o<26;++o){
				num[i][o]=num[i-1][o];
			}
			++num[i][getn(a[i])];
		}
		for(int i=0;i<q;++i){
            int s=0;
			scanf("%d%d %c",&l,&r,&c);
			--l;--r;
			int len=r-l+1;
			s+=(len/n)*(num[n-1][c-'a']);
			r=r%n;l=l%n;
			if((r%n)==n-1){
				r=0;
			}
            
			cout<<s<<endl;
		}
	} 
	return 0;
}

/*
1
6 4
abcdef
1 4 a
*/
