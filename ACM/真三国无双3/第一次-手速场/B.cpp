#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;

bool cmp(int a,int b){
	return a>b;
}

int main(){
	char a[1000009];
	int num[30]={0};
	scanf("%s",&a);
	int si;
	for(int i=0;i<1000005;++i){
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')){
			if(a[i]>='A'&&a[i]<='Z'){
				a[i]+=32;
			}++num[a[i]-'a'];
			continue;
		}else{
		    si=i+1;	
		    break;
		}
	}
	sort(num,num+26,cmp);
	long long sum=0,bu=26;
	for(int i=0;i<26;++i){
		if(num[i]){
			sum+=num[i]*bu;
			--bu;
		}
	}
	cout<<sum;
	printf("%s",a);
	return 0;
}
