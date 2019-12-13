#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;

int main(){
	char a[3];
	int t1=0,t,s;
	cin>>t;
	while(t1<t){
		++t1;
		printf("Case #%d: ",t1);
		cin>>a;
		
        s=sizeof(a);
        cout<<s;
	}
	return 0;
}
