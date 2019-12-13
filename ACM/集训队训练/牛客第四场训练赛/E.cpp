#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;

int pre[1000];
int n,m,pr,a,ans=1,j=1,num,pre0[1000]={0};

int findz(int x){                                                                  
    int r=x;                                                                       
    while(pre[r]!=r)r=pre[r];                                                                                                                    
    return r;                                                            
}

void join(int a,int b){//a为儿子，b为祖先 
	int fa=findz(a);int fb=findz(b);
	if(fa!=fb)                                                                              
    pre[fa]=fb;   
}

int f(int a){//检测祖先是否为0号 
	if(!pre0[a])return 0;
	return 1;
}

int main(){
	
	while(cin>>n>>m){
		
		for(int i=0;i<=n;++i){
			pre[i]=i;
		}
		for(int i=0;i<=n;++i){
			pre0[i]=0;
		}
		for(int i=0;i<m;++i){
			scanf("%d",&a);
			pre0[a]=1;
		}
		for(int i=1;i<=n;++i){
			scanf("%d",&num);
			for(int o=0;o<num;++o){
				scanf("%d",&a);
				join(a,i);
			}
		}
		if(!m){
			cout<<-1<<endl;
			continue;
		}
		for(int i=1;i<=n;++i){
			if(i==pre[i]&&!pre0[i])j=0;
		}
		
		for(int i=1;i<=n;++i){
			cout<<pre[i]<<" ";
		}cout<<endl;/*
		for(int i=1;i<=n;++i){
			cout<<pre0[i]<<" ";
		}cout<<endl;*/
		
		if(!j)cout<<-1<<endl;
		else{
			for(int i=2;i<=n;++i){
				if(pre[i]!=pre[i-1])++ans;
			}
			cout<<ans<<endl;
		}
		ans=1;j=1;
	} 
	return 0;
}
