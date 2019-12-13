#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

int main(){
	char s[200009],t[200009];
	scanf("%s",s);
	scanf("%s",t);
	int n1=strlen(s),n2=strlen(t);
	int ans=n1+n2;
	int t1=n1-1,t2=n2-1;
	while(1){
		if(s[t1]==t[t2]){
			ans-=2;
			--t1;--t2;
			if(t1<0||t2<0) break;
		}
		else break;
	}
	cout<<ans;
	return 0;
}
