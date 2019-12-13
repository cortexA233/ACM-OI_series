#include<bits/stdc++.h>
using namespace std;

int cmp(int a,int b){
	if(abs(a)!=abs(b)) return abs(a)<abs(b);
	else return a<b;
}

int ans[500009]={0},maxn=1;
int a[500009],num=0;

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int u,v;
	double tsum=0;
	for(int i=0;i<n;++i){
		scanf("%d%d",&u,&v);
		tsum+=1.0*(v-u+1);
		a[num++]=u;
		a[num++]=-v-1;
	}
	sort(a,a+num,cmp);
/*	for(int i=0;i<num;++i){
		cout<<a[i]<<" ";
	}cout<<endl;*/ 
	ans[0]=1;
	for(int i=1;i<num;++i){
		if(a[i]<0){
			--ans[i];
			ans[i]+=ans[i-1];
		}
		if(a[i]>0){
			++ans[i];
			ans[i]+=ans[i-1];
		}
		if(ans[i]>maxn) maxn=ans[i];
	}
	printf("%d\n",maxn);
	
	printf("%.13lf",tsum/(m)*1.0); 
	return 0;
}
