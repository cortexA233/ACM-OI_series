/*  
  ������ΪKruskal�����С����������ʾ���� 
          ��C++11�����±�д������ 
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

void join(int a,int b){//aΪ���ӣ�bΪ���� 
	int fa=findz(a);int fb=findz(b);
	if(fa!=fb)                                                                              
    pre[fa]=fb;   
}

void krus(){
	for(int i=0;i<n;++i){
		if(findz(g[i].u)!=findz(g[i].v)){
			e.push_back(g[i].h);
			++se;
			join(g[i].v,g[i].u);
			join(g[i].v,g[i].u);
		}
	}
}

int main(){
	cout<<"������Ϊʹ��Kruskal�㷨�����С����������ʾ����\n����������ͼ�ĵ������ͱ�������"<<endl;
	while(cin>>m>>n){
		se=0;
		e.clear();
		for(int i=0;i<=m;++i){
		    pre[i]=i;
    	}
    	cout<<"����������ͼ�еıߵ���㣬�յ�ͱ�Ȩֵ��"<<endl;
    	for(int i=0;i<n;++i){
    		scanf("%d%d%d",&g[i].u,&g[i].v,&g[i].h);
    	}
    	sort(g,g+n,com);
    	krus();
    	int sum=0;
    	for(int i=0;i<se;++i){
	    	sum+=e[i]; 
    	}
    	cout<<"�������ͼ����С�������ĳ���Ϊ��"<<sum<<endl;
    	cout<<"����ִ����ϣ������Լ���������һ��ͼ�����롣"<<endl; 
    	cout<<"����������ͼ�ĵ������ͱ�������"<<endl; 
    }
	return 0;
}


/*
��������1�� 
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

��������2��
2 2
1 2 5
1 2 15 
*/

