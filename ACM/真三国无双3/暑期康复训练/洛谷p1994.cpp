#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
	int nc=0,nh=0;
    string a;
    cin>>a;
    a.push_back('-');
    for(int i=0;i<a.size();++i){
    	if(a[i]=='C'||a[i+1]!='-'){
    		nc+=a[i+1]-'0';
		}
		if(a[i]=='H'||a[i+1]!='-'){
    		nh+=a[i+1]-'0';
		}
		if(a[i]=='C'||a[i+1]=='-'){
    		++nc;
		}
		if(a[i]=='H'||a[i+1]!='-'){
    		++nh;
		}
		cout<<nc<<" "<<nh/2<<endl;
	}
	if(nh%2!=0){
		nh=nh*2;
		nc=nc*2;
	}
	cout<<nc<<" "<<nh/2;
    return 0;
}
