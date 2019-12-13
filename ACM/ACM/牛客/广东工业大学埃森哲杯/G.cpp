#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

char conv(char a){
	if(a=='|')return '-';
	if(a=='-')return '|';
	return a;
} 

int main(){
	int t,n,m,ro;
	char a[50][50];
	string s;
	cin>>t;
	while(t){
		ro=0;
		--t;
		cin>>n>>m;
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		cin>>s;
		int ss=s.size();
		for(int i=0;i<ss;++i){
			if(s[i]=='L'){
			    ++ro;	
			}else{
				ro+=3;
			}
		}
		ro=ro%4;
		if(ro==0){
			printf("%d %d\n",n,m);
			for(int i=0;i<n;++i){
	    		for(int o=0;o<m;++o){		
				    printf("%c",a[i][o]);
			    }
		    	printf("\n");
	    	}
		}
		if(ro==1){
			printf("%d %d\n",m,n);
			for(int i=m-1;i>=0;--i){
	    		for(int o=0;o<n;++o){		
				    printf("%c",conv(a[o][i]));
			    }
		    	printf("\n");
	    	}
		}
		if(ro==2){
			printf("%d %d\n",n,m);
			for(int i=n-1;i>=0;--i){
	    		for(int o=m-1;o>=0;--o){		
				    printf("%c",a[i][o]);
			    }
		    	printf("\n");
	    	}
		}
		if(ro==3){
			printf("%d %d\n",m,n);
			for(int i=0;i<m;++i){
	    		for(int o=n-1;o>=0;--o){		
				    printf("%c",conv(a[o][i]));
			    }
		    	printf("\n");
	    	}
		}
		printf("\n");
	}
	return 0;
}
