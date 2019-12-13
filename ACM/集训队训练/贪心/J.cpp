#include<iostream>
#include<queue>
#include<cstdio>
#include<algorithm>
using namespace std;

struct st{
	int s,e,id,ans,sta;
	friend bool operator <(st a,st b){
	//	if(a.s!=b.s) return a.s<b.s;
	    return a.e>b.e;
	}
};

int cmp(st a,st b){
	return a.s<b.s;
}

int idc(st a,st b){
	return a.id<b.id;
} 

int main(){
	int n;
	priority_queue<st> q;
	st a[50009];
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		scanf("%d%d",&a[i].s,&a[i].e);
		a[i].id=i;
	}
	a[0].sta=1;
	q.push(a[0]);
	sort(a,a+n,cmp);
	int ans=1;
	for(int i=1;i<n;++i){
		if(a[i].s>q.top().e){
	        a[i].sta=q.top().sta;
	        q.pop();
	        q.push(a[i]);
		}else{
			a[i].sta=(++ans);
			q.push(a[i]);
		}
	}
/*    while(!q.empty()){
    	printf("%d %d\n",q.top().s,q.top().e);
    	q.pop();
	}*/
	sort(a,a+n,idc);
	printf("%d\n",ans);
	for(int i=0;i<n;++i){
		printf("%d\n",a[i].sta);
	}
	return 0;
}
