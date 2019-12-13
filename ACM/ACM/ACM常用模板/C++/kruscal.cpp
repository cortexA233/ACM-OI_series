/*  
  本程序为Kruskal求解最小生成树的演示程序 
          在C++11环境下编写及测试 
     programmed by cortexA33 from SHU
*/
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
#include<set>
#include<vector>
using namespace std;

struct s{
	int u;
	int v;
	int h;
};

s g[10009];
int c,n,m,pre[109],se=0;
vector<int> e;

int com(s a,s b){
	return a.h<b.h;
}

int findz(int x){
	int r=pre[x];
	while(r!=pre[r])r=pre[r];
	int i=x,t;
	while(r!=i){
		t=pre[i];
		pre[i]=r;
		i=t;
	}
	return r;
} 

void join(int a,int b){ 
	int fa=findz(a);int fb=findz(b);
	if(fa!=fb)                                                                              
    pre[fa]=fb;   
}

void krus(){
	int nnum=0;
	for(int i=0;i<n;++i){
		if(findz(g[i].u)!=findz(g[i].v)){
			e.push_back(g[i].h);
			++se;++nnum;
			join(g[i].v,g[i].u);
			join(g[i].u,g[i].v);
			cout<<g[i].u<<" "<<g[i].v;
			if(nnum!=m-1)cout<<endl; 
		}
	}
}

int main(){
	cout<<"本程序为使用Kruskal算法求解最小生成树的演示程序。\n请输入所求图的点数量和边数量："<<endl;
	while(cin>>m>>n){
		se=0;
		e.clear();
		for(int i=0;i<=m;++i){
		    pre[i]=i;
    	}
    	cout<<"请依次输入图中的边的起点，终点和边权值："<<endl;
    	for(int i=0;i<n;++i){
    		scanf("%d%d%d",&g[i].u,&g[i].v,&g[i].h);
    	}
    	sort(g,g+n,com);
		cout<<"您输入的图中的最小生成树包含了以下几个节点之间的边："<<endl;
    	krus();
    	cout<<endl;
    	int sum=0;
    	for(int i=0;i<se;++i){
	    	sum+=e[i]; 
    	}
    	cout<<"它的总长度为："<<sum<<endl;
    	cout<<"程序执行完毕，您可以继续进行下一个图的输入。\n"<<endl; 
    	cout<<"请输入所求图的点数量和边数量："<<endl; 
    }
	return 0;
}


/*
测试数据1： 
5 10
1 2 6
1 3 3
1 4 4
1 5 5
2 3 7
2 4 7
2 5 8
3 4 6
3 5 9
4 5 2
测试数据2：
2 2
1 2 5
1 2 15 
*/

