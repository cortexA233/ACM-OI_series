#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
#include<set>
#include<vector>
using namespace std;

void sw(int x,int y){
	int t;
	t=x;x=y;y=t;
}

int main(){
	int b=1,c=22;
	int *d=&c;
	cout<<*d<<endl;

	set<int> a;
	a.insert(1);
	a.insert(2);
	a.insert(1);cout<<endl;
	for(set<int>::iterator i=a.begin();i!=a.end();++i){
		cout<<*i<<" ";
	}
	return 0;
}
