#include<bits/stdc++.h>
using namespace std;
#define ll long long

//int r[1000005],d[1000005],s[1000005],t[1000005];
int a[100009];

int main(){
	ios::sync_with_stdio(0);
	int n,m,s=0,l=1;
	cin>>n>>m;
	int le=0;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		if(a[i]>le) le=a[i];
		s+=a[i];
	}
	int ri=s;
	while(le<ri){
		int cu=0,num=0,mid=((le+ri)>>1);
	//	cout<<le<<" "<<mid<<" "<<ri<<"!"<<" ";
		for(int i=1;i<=n;++i){
			if(cu+a[i]<=mid){
				cu+=a[i];
			}else{
				cu=a[i];
				++num;
			}
		}
	//	cout<<num<<"?"<<" ";
		if(num>=m){
			le=mid+1;//cout<<"yes"<<endl;
		}else{
			ri=mid;//cout<<"no"<<endl;
		}
	}
	cout<<le<<"!"<<endl;
	int cu=0;
	int ma[100005]={0};
	ma[n]=2;
	for(int i=n;i>=1;--i){
		if(cu+a[i]<=le){
			cu+=a[i];	
			if(cu==le){
				if(ma[i]) ma[i]=3;
				else ma[i]=1;
			}
		}else{
			cu=a[i];
			if(ma[i]) ma[i]=3;
			else ma[i]=2;
			if(ma[i+1]) ma[i+1]=3;
			else ma[i+1]=1;
		}
	}
	ma[1]=1;
	for(int i=1;i<=n;++i){
		if(ma[i]==3) cout<<i<<" "<<i<<endl;
		if(ma[i]==1) cout<<i<<" ";
		if(ma[i]==2) cout<<i<<endl;
	}
	return 0;
}
/*
5 3
4 2 4 5 1
*/
