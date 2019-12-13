#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;

int main(){
	int n,h1=0,h2=0,sum=0;
	cin>>n;
//	h2+=140;
	for(int i=2001;i<=n;++i){
		h2+=140;
		if(i%4==0){	
			if(i%100!=0){
				h1+=700;++sum;
				continue;
			}
			if(i%100&&i%400!=0){
				continue;
			} 
			if(i%400==0){
			    h1+=700;++sum;
			    continue;
			}
		}
	} 
	cout<<sum<<" "<<h2<<" "<<h1;
	return 0;
}
