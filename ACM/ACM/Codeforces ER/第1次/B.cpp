#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
#include<queue>
#include<cstdio>
using namespace std;

struct stu{
	int id;
	int ti;
	int bt;
	int et;
};

int co(stu a,stu b){
	if(a.bt!=b.bt)
	return a.bt<b.bt;
	return a.id<b.id; 
}

int main(){
	int t;
	cin>>t;
	while(t){
		--t;
		int b[1009]={0};
		stu a[1009];
		int n,ans[1009]={0};
		cin>>n;
		for(int i=0;i<n;++i){
			a[i].id=i;
			cin>>a[i].bt>>a[i].et;
		} 
		sort(a,a+n,co);
		b[a[0].id]=1;a[0].ti=1;
		for(int i=1;i<n;++i){
		    if(a[i-1].bt+a[i-1].ti+1>a[i].et){
		    	b[a[i].id]=0;
			}else{
				a[i].ti=a[i-1].bt+a[i-1].ti+1-a[i].bt;
				b[a[i].id]=a[i-1].bt+a[i-1].ti+1-a[i].bt;
			}  
			cout<<a[i].ti<<" ";
		} cout<<endl;
		for(int i=0;i<n;++i){
			cout<<b[i]<<" ";
		}cout<<endl;
	}
	return 0;
}
