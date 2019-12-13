#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
#include<set>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main(){
    int p[5]={5,11,17,23,29};
	set<int> ans;set<int>::auto t=ans.begin();
	for(int i=0;i<5;++i){
		ans.clear();
		printf("µ±p=%2dÊ±: ",p[i]);
		for(int o=1;o<p[i];++o){
			ans.insert((o*o*o)%p[i]);
		}
		for(t=ans.begin();t!=ans.end();++t){
			cout<<*t<<" ";
		} 
		cout<<endl;
	}
	return 0;
} 
