#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
#include<cstdio>
using namespace std;

int main(){
	int t,n,kn,a[209],k[209],ans=1;
	cin>>t;
	while(t){
		--t;ans=1;
		cin>>n>>kn;
		for(int i=0;i<=n+1;++i){
			a[i]=1;//1δȾɫ��0��Ⱦɫ 
		} 
/*		for(int i=1;i<=n;++i){
		    	cout<<a[i]<<" ";//1δȾɫ��0��Ⱦɫ 
	    	} cout<<endl;*/
		for(int i=0;i<kn;++i){
			cin>>k[i];a[k[i]]=0;
		} 
	/*	for(int i=1;i<=n;++i){
		    	cout<<a[i]<<" ";//1δȾɫ��0��Ⱦɫ 
	    	} cout<<endl;*/
		int j=1,ju[209];//0��ʾ�Ѿ�Ⱦ����1��ʾδȾ�� 
		while(j){		
			j=0;
			for(int i=1;i<=n;++i){
				ju[i]=1;
			} 
			for(int i=1;i<=n;++i){
				if(a[i]){
					j=1;
					if(!a[i-1]&&ju[i-1]){
						a[i]=0;ju[i]=0;
					}
					if(!a[i+1]&&ju[i+1]){
						a[i]=0;ju[i]=0;
					}
				}
			}
			if(!j){
				break;
			}
			++ans; 
	/*		for(int i=1;i<=n;++i){
		    	cout<<a[i]<<" ";//1δȾɫ��0��Ⱦɫ 
	    	} cout<<endl;*/
		}
		cout<<ans<<endl;
	}
	return 0;
}
