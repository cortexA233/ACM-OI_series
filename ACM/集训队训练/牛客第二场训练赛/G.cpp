#include<iostream>
#include<string>
#include<algorithm>
#include<queue>
using namespace std;

int judge4(int x){
	while(x>0){
		if(x%10==4){
			return 1;
		}
		x=x/10;
	}
	return 0;
}

int judge38(int x){
	int t[10],size=0;
	for(int i=0;i<10;++i){
		t[i]=0;
	}
	while(x>0){
		t[size]=x%10;
		++size;
		x=x/10;
	} 
	for(int i=9;i>=1;--i){
		if(t[i]==3&&t[i-1]==8){
			return 1;
		}
	}
	return 0;
}

int ans[1000009]={0};

int main(){
	int n,m;
	ans[1]=0;ans[0]=0;
	for(int i=2;i<=1000000;++i){
		if(judge4(i)||judge38(i))ans[i]=ans[i-1]+1;
		else ans[i]=ans[i-1]; 
	}
	while(1){
		cin>>n>>m;
		if(n==0&&m==0)break;
    	cout<<ans[m]-ans[n-1]<<endl;
	}
	return 0;
}
