#include<bits/stdc++.h>
using namespace std;

int pre[30009],cnt[30009];

int finda(int x){
	int r=x;
	while(r!=pre[r]){
		r=pre[r];
	}
	int l=x;
	while(l!=pre[l]){
		pre[l]=r;
		l=pre[l];
	}
	return r;
} 

void join(int x,int y){
	int fx=finda(x),fy=finda(y);
	pre[fy]=fx;
	cnt[fx]+=cnt[fy]+1;
	cnt[fy]=0;
}

int main(){
	int a[30009],n,q;
	cin>>n;
	char c;
	for(int i=0;i<=30009;++i){
		pre[i]=i;cnt[i]=0;
	}
	int x,y;
	for(int i=0;i<n;++i){
		scanf("%c",&c);
		if(c=='M'){
			scanf("%d%d",&x,&y);
			join(x,y);
		}
		if(c=='C'){
			scanf("%d",&x);
		    printf("%d",cnt[x]);
		}
	}
	int num=0;
	for(int i=1;i<=n;++i){
		if(pre[i]==i) ++num;
	}
	cout<<num;
	return 0;
}
