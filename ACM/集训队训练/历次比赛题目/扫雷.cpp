#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

char a[600][600];

int scanl(int x,int y){
	int sum=0;
	for(int i=x-1;i<=x+1;++i){
		for(int o=y-1;o<=y+1;++o){
			if(a[i][o]='x')++sum;
		}
	}
	return sum;
}

int main(){
	int n,m;
	while(cin>>n>>m){
		if(!m&&!n)break;
		for(int i=0;i<=n+1;++i){
	    	for(int o=0;o<=m+1;++o){
		    	a[i][o]='A';
		    }
     	}
		for(int i=1;i<=n;++i){
	    	for(int o=1;o<=m;++o){
		    	cin>>a[i][o];
		    }
     	}
	    for(int i=1;i<=n;++i){
		    for(int o=1;o<=m;++o){
			    if(a[i][o]=='.'){
				    a[i][o]=scanl(i,o)+'0';
				    cout<<a[i][o]<<endl;
			    }
		    }
	    }
	    for(int i=1;i<=n;++i){
		    for(int o=1;o<=m;++o){
			    cout<<a[i][o];
		    }
		    cout<<endl;
	    }
	}
	return 0;
}
