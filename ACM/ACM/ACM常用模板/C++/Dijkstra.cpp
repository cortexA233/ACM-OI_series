#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;

int intmax=1;
int a[2010][2010],ju[2010]={0};
int l,m,s,e,n,d[2010],did;

int dij(){
	for(int i=1;i<=n;++i){
		d[i]=a[s][i];
	}d[s]=0;ju[s]=1;
	for(int i=1;i<=n;++i){
		int minn=intmax;did=1;
		for(int o=2;o<=n;++o){
	    	if(d[o]<minn&&!ju[o]){
		    	minn=d[o];
		    	did=o;
	    	}
    	}ju[did]=1;
		for(int o=1;o<=n;++o){
			if(minn+a[did][o]<d[o]){
				d[o]=minn+a[did][o];
			}
		}
	}
}

int main(){
	for(int i=0;i<25;++i)intmax*=2;intmax-=1;intmax*=2;
	cout<<"������ΪDijkstra�㷨�ļ��������ֱ�������·��������(���޶�Ϊ2000)��"<<endl;
	cin>>n>>m;
	for(int i=0;i<=n;++i){
		for(int o=0;o<=n;++o){
		    a[i][o]=intmax; 
		} 
	}
	cout<<"��ֱ�����ÿ��·������㣬�յ��·������(��ı�Ŵ�1��ʼ��·����������Ϊ2^22)��"<<endl;
	for(int i=0;i<m;++i){
		cin>>s>>e>>l;
		a[s][e]=l;a[e][s]=l;
	}
	cout<<"��������·���������յ�(������ı��i����������1<=i<=n)��"<<endl;
	cin>>s>>e;
	dij();
	cout<<"����㵽�յ����·������Ϊ��"<<d[e]<<endl;
	return 0;
}


/*
�������ݣ�
4 5
1 2 1
1 3 1
1 4 3
2 4 2
3 4 1
1 4
*/ 


