#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

int n,t,r[20000],num=0,maxn,temp;

bool com(int a,int b){
	return r[a]>r[b];
}

int main(){
	cin>>n>>t;
	for(int i=0;i<n;++i){
    	cin>>r[i];
    }
    for(int o=0;o<t;++o){
    	maxn=r[0];
    for(int i=0;i<n;++i){
    	if(r[i]>maxn){
    		num=i;
		}
    }
    cout<<num+1<<endl;
	temp=r[num]/(n-1);
    for(int i=0;i<n;++i){
    	if(i!=num){
    		r[i]+=temp;
		}
	}
	temp=r[num]%(n-1);
	for(int i=0;temp>0;++i){
		++r[i];
		--temp;
	}
	r[num]=0;
	}
    

/*	for(int i=0;i<n;++i){
		cout<<num[i]<<" ";
	}*/
	return 0;
}
