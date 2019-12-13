#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

struct food{
	int c;
	int d;
};

food a[30009];

bool cmp(food a,food b){
	return a.c>b.c;
}

int main(){
	int t,d[30009],c[30009],ind,jud,n,m,mon;
	
	cin>>t;
	while(t){
		--t;
		cin>>n>>m;
		for(int i=0;i<n;++i){
			cin>>a[i].d>>a[i].c;
		}
		sort(a,a+n,cmp);
		for(int i=0;i<m;++i){
			cin>>mon;jud=0;
			for(int o=0;o<n;++o){
				if(mon>=a[o].d){
					ind=o;
					jud=1;break;
				}
			}
			if(jud){
				cout<<a[ind].c<<endl;
			}else {
				cout<<0<<endl;
			}
		}
	}
	return 0;
}
