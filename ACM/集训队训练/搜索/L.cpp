#include<bits/stdc++.h>
using namespace std;

int ss[10000]={0};
int g[30][30]={0};
int judge=0;
int xu[100]={0};

void dfs(int v){
//	cout<<v<<" ";
	if(g[v]['m'-'a']==1||v=='m'-'a'){
		judge=1;
	//	cout<<"ac"<<endl;
		return ;
	}
	int fl=0;
	for(int i=0;i<26;++i){
		if(g[v][i]&&xu[i]==0){
			fl=1;
			int flag=1;		
		    xu[i]=1;
			dfs(i);
			xu[i]=0;
		}
	}
	if(!fl){
//		cout<<endl;
		return ;
	}
}

int main(){
	string te;
	vector<string> a;
	int n;
	while(cin>>te){
		if(te!="0"){
			g[te[0]-'a'][te[te.size()-1]-'a']=1;
			continue;
		}	
	/*	for(int i=0;i<26;++i){
			for(int o=0;o<26;++o){
				cout<<g[i][o]<<" ";
			}cout<<endl;
		}*/
		for(int i=0;i<26;++i){
			if(g[1][i]==1){
				judge=1;
			}
		}
		if(judge) dfs(1);
		if(judge) cout<<"Yes."<<endl;
		else cout<<"No."<<endl;
		judge=0;
		for(int i=0;i<26;++i){
			xu[i]=0;
		}
		for(int i=0;i<30;++i){
			for(int o=0;o<30;++o){
				g[i][o]=0;
			}
		}
	}
	return 0;
}
