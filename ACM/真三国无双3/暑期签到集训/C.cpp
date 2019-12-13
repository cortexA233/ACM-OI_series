#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<queue>
#include<functional>
using namespace std;

int a[505][505];

int main()
{
	int n,m;
	while (cin>>n>>m)
	{
		memset(a,0,sizeof(a));
		for(int i=1;i<=m; i++)
		{
			int t1,t2;
			cin>>t1>>t2;
			if(a[t1][t2]==0)
				a[t1][t2]=1,a[0][t2]++;
		}
		priority_queue <int,vector<int>,greater<int>> q;
		for(int i=1;i<=n;i++)
			if(a[0][i]==0)
				q.push(i);
		while (!q.empty())
		{
			int tem=q.top();
			q.pop();
			for(int i=1;i<=n;i++)
				if(a[tem][i]){
					--a[0][i];
					if(a[0][i]==0)
						q.push(i);
				}
			cout<<tem;
			if(!q.empty()) cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
