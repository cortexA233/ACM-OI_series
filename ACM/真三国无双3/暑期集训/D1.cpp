#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int num[10009][28];

int main(){
	int l,r,t,n,q,s;
	char c;
	cin>>t;
	while(t){
		--t;
		char a[10009];
		scanf("%d%d",&n,&q);
		getchar();
		for(int i=0;i<n;++i){
			for(int o=0;o<28;++o){
				num[i][o]=0;
			}
		}
		for(int o=1;o<=n;++o){
			scanf("%c",&a[o]);
		}
		
		num[1][a[1]-'a']=1;
		for(int i=1;i<=n;++i){
			for(int o=0;o<26;++o){
				num[i][o]=num[i-1][o];
			}
			++num[i][a[i]-'a'];
		}
    	for(int i=0;i<q;++i){
    		s=0;
    		scanf("%d%d %c",&l,&r,&c);
    		int l1=l%n,r1=r%n,t1,t2;
    		if(!l1) l1=n;
    		t1=num[l1-1][c-'a'];
			t2=num[r1][c-'a'];
			if(l1==1) t1=0;
			s=t2-t1;
			l-=l1;r-=r1;
			s+=((r-l)/n)*num[n][c-'a'];
			printf("%d\n",s);
		}
	}
	return 0;
}
