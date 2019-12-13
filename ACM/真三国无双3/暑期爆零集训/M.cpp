#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

long long gcd(long long a,long long b){
	long long t=1;
	if(a<b){
		t=a;a=b;b=t;
	}
	while(a%b){
		t=b;b=a%b;a=t;
	}
	return b;
}

long long lcm(long long a,long long b){
	return (a*b)/gcd(a,b);
}

int m,ju[30];
long long n,n1,a[30];

void gs(int ju[],int num,int c,int s){
	if(c==num){
	/*	for(int i=0;i<m;++i){
			if(ju[i]) cout<<a[i]<<" ";
		}cout<<endl;*/
		if(s==0) return;
		if(s==1){
		    for(int i=0;i<m;++i){
    			if(ju[i]){
    				n-=n1/a[i];
    //				cout<<"结果"<<-(n1/a[i])<<endl<<n<<endl;
    				break;
				}
	    	}	    	
	    	return;
		}
		if(s%2){
			long long gbs=1;
			for(int i=0;i<m;++i){
    			if(ju[i]) gbs=lcm(gbs,a[i]);
	    	}	
	    	n-=n1/gbs;
	   // 	cout<<"结果"<<-(n1/gbs)<<endl<<n<<endl;
	    	return;
		}
		if(!(s%2)){
			long long gbs=1;
			for(int i=0;i<m;++i){
    			if(ju[i]) gbs=lcm(gbs,a[i]);
	    	}	
	    	n+=n1/gbs;
	   // 	cout<<"结果"<<(n1/gbs)<<endl<<n<<endl;
	    	return;
		}			
	}
	ju[c]=1;
	gs(ju,num,c+1,s+1);
	ju[c]=0;
	gs(ju,num,c+1,s);
}

int main(){		
	while(cin>>n>>m){	
	    n1=n; 
		for(int i=0;i<m;++i){
		    cin>>a[i];
		//	scanf("%lld",&a[i]);
		}
	//	cout<<"n1是这个！"<<n1<<endl;
		gs(ju,m,0,0);
		cout<<n<<endl;
	}
	return 0;
}

/*
20 3
2 4 6
*/





