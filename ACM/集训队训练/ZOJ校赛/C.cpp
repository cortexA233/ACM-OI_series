#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<queue>
#include<stack>
using namespace std;

stack<int> a[600009];

int main(){
	int t,n,q,o,s,v;
	cin>>t;
	while(t){
		--t;
		cin>>n>>q;
		for(int i=0;i<q;++i){
			cin>>o>>s;
			if(o!=2)cin>>v;
			if(o==1)a[s].push(v);
			if(o==2){
				if(a[s].empty())cout<<"EMPTY"<<endl;
				else{
					cout<<a[s].top()<<endl;
					a[s].pop();
				} 			
			}
			if(o==3){
				while(!a[v].empty()){
					a[s].push(a[v].top());
					a[v].pop();
				}
			} 
		}
		for(int i=0;i<n;++i){
			while(!a[i].empty()){
				a[i].pop();
			}
		}
	}
	return 0;
}
