#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[1000],sum=0;
	cout<<((2^3)^4)<<endl;
	for(int i=0;i<30;++i){
		cin>>a[i];
	}
	for(int i=0;i<30;++i){
		for(int o=0;o<30;++o){
			for(int p=0;p<30;++p){
				if(i!=o&&o!=p&&i!=p){
					sum=max(sum,a[i]^a[o]^a[p]);
				}
			}
		}
	}
	cout<<sum;
	return 0;
}

/*
258055 69760 163908 249856 53440
151684 77958 176134 8262 229446
245953 20676 45189 69826 131075
28672 155717 118851 221318 254150
135235 86083 41089 28743 32772
225475 118855 249862 184320 217154
*/
