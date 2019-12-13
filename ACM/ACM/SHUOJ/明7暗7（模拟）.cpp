#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int j(int a){
	if(a%7==0)return 1;
	while(a>1){
		if(a%10==7)return 1;
		a/=10;
	}
	return 0;
}

int main(){
	ios::sync_with_stdio(false);
	int n,m,num,i,ans;
	while(cin>>m>>n){
		num=0;i=m+1;
		while(num<n){
			if(j(i)){
				++num;ans=i;
			}
			++i;
		}
		cout<<ans<<endl;
	} 
	return 0;
} 
