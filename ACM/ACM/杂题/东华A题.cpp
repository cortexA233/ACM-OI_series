#include<cstdlib>
#include<iostream>
using namespace std;

int sum=0;

int j(int a){
	if(!a) return 1;
	int s=1;
	for(int i=1;i<=a;++i) s*=i;
	return s;
}

int c(int a,int b){
	return j(a)/(j(a-b)*j(b));
}

void co(int a,string s,int n,int n1,int n2){
	if(n==2*a){
		if(s[0]==')'||s[n-1]=='(') return ;
		if(n1!=n2) return ;
		++sum;
	}else{
		if(n1>n2){
			co(a,s+'(',n+1,n1+1,n2);
			co(a,s+')',n+1,n1,n2+1);
		}else{
			co(a,s+'(',n+1,n1+1,n2);
		}
	} 
}

int main(){
	int ans[10];
	for(int i=1;i<=8;++i){
		sum=0;
		co(i,"",0,0,0);
		ans[i]=sum;
	}
	int a,b;
    while(cin>>a>>b){
    	cout<<ans[a+b]*c(a+b,a)<<endl;
	}
	return 0;
}
