#include<bits/stdc++.h>
using namespace std;

struct st{
	int a,b;
};

int cmp(st a,st b){
	return a.a<b.a;
}

int cm(int a,int b){
	return a>b;
}

int main(){
	st g[100009];
	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>g[i].a;
	}
	for(int i=0;i<n;++i){
		cin>>g[i].b;
	}
	sort(g,g+n,cmp);
	int a[100009],b[100009];
	for(int i=0;i<n;++i){
		a[i]=g[i].b;
		b[i]=g[i].b;
	}
	sort(b,b+n,cm);
	map<int,int> ma;
	for(int i=0;i<n;++i){
		ma[b[i]]=i;
	}
	for(int i=1;i<=6;++i){
//		cout<<ma[i]<<" ";
	}
//	cout<<endl<<"!"<<endl;
	int temp;
    int ans=0;
	for(int i=0;i<n;++i){
		while(a[i]!=b[i]){
			temp=a[ma[a[i]]];
			++ans;
			a[ma[a[i]]]=a[i];
			a[i]=temp;
		/*	for(int i=0;i<n;++i){
				cout<<a[i]<<" ";
			}cout<<endl;*/
		}
	} 
	/*
	for(int i=0;i<n;++i){
		cout<<a[i]<<" ";
	}cout<<endl;
	*/
//	cout<<"!"<<endl<<ans;
    cout<<ans;
	return 0;
}

/*
5
5 3 4 1 2
4 3 1 7 8

6
1 2 3 4 5 6
3 4 5 1 2 6
*/
