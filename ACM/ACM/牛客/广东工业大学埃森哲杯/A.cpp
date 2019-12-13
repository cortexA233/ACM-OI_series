#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t){
		--t;
		int n,s=1;
    	cin>>n;
	    for(int i=0;i<n-1;++i){
		    s=s*2;
    	}
	    cout<<s<<endl;
	}
	return 0;
}
