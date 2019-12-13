#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int n,a[100][100];
	cin>>n;
	for(int i=1;i<=n;++i){
		for(int o=1;o<=n;++o){
			cin>>a[i][o];
		}
	}
	int s1=0,s2=0,t1=0,t2=0;
	for(int i=1;i<=n;++i){
		s1+=t1;s2+=t2;
		t1=a[1][i];t2=a[1][i];
		for(int o=1;o<n;++o){
			if(i+o>n){
				t1*=a[1+o][i+o-n];
			}else{
				t1*=a[1+o][i+o];
			}
			if(i-o<1){
				t2*=a[1+o][i-o+n];
			}else{
				t2*=a[1+o][i-o];
			}
		}
	}
	cout<<s1-s2;
	return 0;
}
