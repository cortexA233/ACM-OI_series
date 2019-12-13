#include<bits/stdc++.h>
#define ll long long
using namespace std;

int sum[100009][30]={0};


int main(){
	int T;
	scanf("%d",&T);
	int T1=T;
	while(T--){
		int n,q;
		char s[100009];
		scanf("%d%d",&n,&q);		
		scanf("%s",s);
		memset(sum,0,sizeof(sum));
		sum[1][s[0]-'A']=1;
		for(int i=2;i<=n;++i){
			for(int o=0;o<26;++o){
				sum[i][o]=sum[i-1][o];
				if(o==s[i-1]-'A'){
					++sum[i][o];
				}
			}
		}
		
		printf("Case #%d:\n",T1-T);
		while(q--){
			int l,r;
			scanf("%d%d",&l,&r);
			int ans[26]={0};
			for(int i=0;i<26;++i){
				ans[i]=sum[r][i]-sum[l-1][i];
			}
			for(int i=0;i<26;++i){
				if(ans[i]){
					printf("%d\n",ans[i]);
					break;
				}
			}
		}
	}
	return 0;
}
