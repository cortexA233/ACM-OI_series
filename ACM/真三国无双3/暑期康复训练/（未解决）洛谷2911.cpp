#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;

int main(){
	int num[200]={0},s1,s2,s3;
	scanf("%d%d%d",&s1,&s2,&s3);
	for(int i=1;i<=s1;++i){
		for(int o=1;o<=s2;++o){
			for(int p=1;p<=s3;++p){
				++num[i+o+p];
			}
		}
	}
	int t=0;
	for(int i=0;i<=s1+s2+s3;++i){
		if(num[i]>t){
			t=num[i];
		}
	} 
	printf("%d",t);
	return 0;
}
