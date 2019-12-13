#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t){
		--t;
		int n,a[1000],b[1000];
		cin>>n;
		int jud=1;
		for(int i=0;i<n;++i){
			cin>>a[i]>>b[i];
		} 
		for(int i=0;i<n;++i){
			for(int o=0;o<n;++o){
				if(a[i]==b[o]){
					jud=0;break;	
				}
				if(a[i]==a[o]){
					if(b[i]!=b[o]){
						jud=0;break;
					}
				}
			}
		}
		if(!jud) cout<<"Poor dxw!"<<endl;
        else cout<<"Lucky dxw!"<<endl;
	}
	return 0;
}
