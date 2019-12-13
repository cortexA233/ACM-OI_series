#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
#include<cstdio>
using namespace std;

string plu(string a,string b){
	string c,t,ans;
	int jinwei=0,sum;
	if(a.size()>b.size()){
		t=a;
		a=b;
		b=t;
	}
	int asize=a.size(),bsize=b.size(),temp=b.size()-a.size();
	for(int i=asize-1;i>=0;--i){
		sum=a[i]-'0'+b[i+temp]-'0'+jinwei;
		jinwei=0;
		if(sum>=10){
			sum-=10;
			jinwei=1;
		}
		c.push_back(sum+'0');
	}
	for(int i=bsize-asize-1;i>=0;--i){
		sum=b[i]-'0'+jinwei;
		if(sum>=10){
			sum-=10;
			jinwei=1;
		}
		c.push_back(sum+'0');
	}
	if(jinwei)c.push_back('1');
	for(int i=c.size()-1;i>=0;--i){
		ans.push_back(c[i]);
	}
	return ans;
}

int main(){
    string s1,s2;
    cin>>s1>>s2; 
    cout<<plu(s1,s2);
    return 0;
} 
