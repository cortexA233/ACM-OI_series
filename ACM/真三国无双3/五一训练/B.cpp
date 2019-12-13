#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct st{
	int a;
	int b;
};

int nabs(int a){
	if(a<0) return -a;
	return a;
}

int ds[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int a1027=300;
st g[100009];

int qz[13]={0};

int main(){
	ios::sync_with_stdio(0);
	string s;
	int n;
	cin>>n;
	char cha;
	for(int i=1;i<13;++i){
		qz[i]=qz[i-1]+ds[i];
	}
	for(int i=0;i<n;++i){
		cin>>s;
		cin>>g[i].a>>cha>>g[i].b;
	}
	int ans[400]={0};
	for(int i=0;i<n;++i){
		ans[qz[g[i].a-1]+g[i].b]=1;
	}
	int res=0,sum,i1=0,i2=0,date=0;
	for(int i=0;i<400;++i){
		if(ans[i]){
			i2=i;
			if(i1){
				if(nabs(date-a1027)>i2-a1027&&res<=i2-i1){
					res=i2-i1;
					date=i2-1;
				}
			}
			i1=i;
		}
	}
	if(date==0){
		cout<<"12-31";
		return 0;
	}
	int month=1,day;
	while(date){
		if(date-ds[month]<=0) break;
		date-=ds[month];
		++month;
	}
	day=date;
	if(month<10) cout<<0;
	cout<<month<<"-";
	if(day<10) cout<<0;
	cout<<day;
	return 0;
}

/*
3 
Henk 01-09 
Roos 09-20 
Pietje 11-11

*/
