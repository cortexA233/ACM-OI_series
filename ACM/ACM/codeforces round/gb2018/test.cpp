#include<bits/stdc++.h>
using namespace std;

int main(){
	long long c=1e18+7;
	c+=7;
	for(long long i=2;i*i<=c;++i){
		if(c%i==0) cout<<i<<"!"<<" ";
	}
	cout<<c;
	return 0;
}
