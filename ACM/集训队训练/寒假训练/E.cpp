#include<iostream>
#include<algorithm>
using namespace std;

int n,ans=0;

int main(){
	cin>>n;
	for(int i=0;i<=100;++i){
		for(int o=0;o<=50;++o){
			for(int j=0;j<=20;++j){
				for(int p=0;p<=10;++p){
					if(i*10+o*20+j*50+p*100==n)++ans;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
