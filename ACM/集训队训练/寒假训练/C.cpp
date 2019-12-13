#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int a[3][3],b[3][3];
	for(int i=0;i<3;++i){
		for(int o=0;o<3;++o){
			cin>>a[i][o];
		}
	} 
	for(int i=0;i<3;++i){
		for(int o=0;o<3;++o){
			cout<<a[o][i];
			if(o!=2)cout<<" ";
		}cout<<endl;
	} 
	return 0;
}
