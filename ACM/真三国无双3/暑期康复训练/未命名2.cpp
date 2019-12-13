#include<iostream>
#include<cstring>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

vector<string> gao,luo;
string temp;

int main(){
	ios::sync_with_stdio(false);
	int n,m,num=0;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;++i){
		getline(cin,temp);
		gao.push_back(temp);
	}
	for(int i=0;i<m;++i){
		cin>>temp;
		for(int o=0;o<n;++o){
			if(temp==gao[o]){
				++num;break;
			}
		}
	}
	printf("%d",num);
	return 0;
} 






