#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring> 
#include<queue>
using namespace std;

int main(){
	int n,m,r[1009],l[1009];
	cin>>n>>m;
	for(int i=0;i<m;++i){
		cin>>l[i]>>r[i];
	} 
	int cu=1;
	cout<<1;
	for(int i=1;i<n;++i){
		if(cu==1){
			cout<<0;
			cu=0;
		}else{
			cout<<1;
			cu=1;
		}
	}
	return 0;
}
