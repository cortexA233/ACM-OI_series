#include<bits/stdc++.h>
using namespace std;
#define ll long long

string s;
int a[100009];
string b[100009];
string c;
int ans[100009];

int np(int a,int b){
	int s=1;
	for(int i=0;i<b;++i) s*=a;
	return s;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>s;
	int n=s.size();
	for(int i=0;i<n;++i){
		a[i]=s[i];
	}
	for(int i=0;i<n;++i){
		for(int o=0;o<8;++o){
			int t=a[i]%2;
			a[i]/=2;
			b[i].push_back(t+'0');
		}
	}
	for(int i=n-1;i>=0;--i){
		for(int o=7;o>=0;--o){
			c.push_back(b[i][o]);
		}
	}
	/*
	int co=0;
	for(int i=c.size()-1;i>=0;--i){
		cout<<c[i];++co;
		if(co%6==0){
			cout<<" ";
		}
	}
	cout<<endl;
	*/
	int co=0; 
	
	int n1=c.size();
//	cout<<n1<<endl;
	int tem=0;
	for(int i=0;i<n1;++i){
		if(i%6==0&&i!=0){
			ans[co++]=tem;
			tem=0;
		}
		tem+=(c[i]-'0')*np(2,i%6);
	}
	ans[co++]=tem;
	for(int i=co-1;i>=0;--i){
		cout<<ans[i]<<" ";
	}
	return 0;
} 
