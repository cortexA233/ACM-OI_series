#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;

int nabs(int a){
	if(a<0) return -a;
	return a;
}

int main(){
	int n,b,a[10000],s1[1000]={0},s2[1000]={0},fu=0,cha[1000],num=0;//s1ÆæÊý£¬s2Å¼Êý 
	cin>>n>>b;
	cin>>a[0];
	if(a[0]%2) ++s1[0];
	else ++s2[0]; 
	for(int i=1;i<n;++i){
		cin>>a[i];
		if(a[i]%2){
			s1[i]+=s1[i-1]+1;
			s2[i]+=s2[i-1];
		}
		else{
			s2[i]+=s2[i-1]+1;
			s1[i]+=s1[i-1];
		}
	}
    for(int i=0;i<n-1;++i){
    	if(s1[i]==s2[i]){
    		cha[num]=nabs(a[i+1]-a[i]);++num;
		}
	}
	sort(cha,cha+num);
	for(int i=0;i<num;++i){
		fu+=cha[i];
	}
	while(fu>b){
		fu-=cha[num-1];
		--num;
	}
/*	for(int i=0;i<num;++i){
		cout<<cha[i]<<" ";
	}cout<<endl;*/
	cout<<num;
	return 0;
}
