#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int ist(int a,int b,int c){
	return (a+b>c)&&(a+c>b)&&(b+c>a);
}

int main(){
	int n,ans=0;
	cin>>n;
	for(int i=1;i<=n;++i){
		for(int o=i;o<=n;++o){
			for(int p=o;p<=n;++p){
				if(ist(i,o,p)||!((i^o)^p))++ans;
			}
		}
	}
	cout<<ans;
	return 0;
}
