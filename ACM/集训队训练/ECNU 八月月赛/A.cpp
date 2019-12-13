/*#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,h,w;
	int a[110][110],km[110][110];
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;++i){
		for(int o=1;o<=m;++o){
			scanf("%d",&a[i][o]);
		}
	}
	scanf("%d%d",&h,&w);
	for(int i=1;i<=h;++i){
		for(int o=1;o<=w;++o){
			scanf("%d",&km[i][o]);
		}
	}
	int ans[109][109]={0};
	for(int i=1;i<=n-h+1;++i){
		for(int o=1;o<=m-w+1;++o){
			for(int p=1;p<=h;++p){
				for(int q=1;q<=w;++q){
					ans[i+h/2][o+w/2]+=a[i+p][o+q]*km[p][q];
				}
			}
		}
	}
	for(int i=h/2+1;i<=n-h+1;++i){
		for(int o=w/2+1;o<=m-w+1;++o){
			printf("%d ",ans[i][o]);
		}printf("\n");
	}
	return 0;
}*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,h,w;
	int a[110][110],km[110][110];
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;++i){
		for(int o=0;o<m;++o){
			scanf("%d",&a[i][o]);
		}
	}
	scanf("%d%d",&h,&w);
	for(int i=0;i<h;++i){
		for(int o=0;o<w;++o){
			scanf("%d",&km[i][o]);
		}
	}
	int ans[109][109]={0};
	for(int i=0;i<=n-h;++i){
		for(int o=0;o<=m-w;++o){
			for(int p=0;p<h;++p){
				for(int q=0;q<w;++q){
					ans[i+h/2][o+w/2]+=a[i+p][o+q]*km[p][q];
				}
			}
		}
	}
	for(int i=h/2;i<n-h+1+h/2;++i){
		for(int o=w/2;o<m-w+1+w/2;++o){
			printf("%d ",ans[i][o]);
		}printf("\n");
	}
	return 0;
}
