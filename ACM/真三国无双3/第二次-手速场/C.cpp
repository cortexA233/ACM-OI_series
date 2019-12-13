#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<map>
#include<algorithm>
using namespace std;


int absn(int a){
	if(a<0)return -a;
	return a;
}

int main(){
	string s;
	int q,a,b,n;
	n=s.size();
	cin>>s;
	cin>>q;
	while(q){
		--q;
		cin>>a>>b;
		int sx=0,sy=0,jud=0,disx=1000000,disy=10000000;
		for(int i=0;i<n;++i){
	    	if(s[i]=='U'){
			   	++sy;
		    }
    		if(s[i]=='D'){
    			--sy;
		    }
    		if(s[i]=='L'){
	   			--sx; 
	    	}
			if(s[i]=='R'){
				++sx;
    		}
	    	if(sx==a&&sy==b){
		    	jud=1;
		    }
		}
        if(jud){
        	cout<<"Yes"<<endl;
        	continue;
		}
		disx=sx;disy=sy;
		for(int i=0;i<n;++i){
	    	if(s[i]=='U'){
			   	++sy;
		    }
    		if(s[i]=='D'){
    			--sy;
		    }
    		if(s[i]=='L'){
	   			--sx; 
	    	}
			if(s[i]=='R'){
				++sx;
    		}
	    	if(sx==a&&sy==b){
		    	jud=1;
		    }
		}
        if(jud){
        	cout<<"Yes"<<endl;
        	continue;
		}
		if(a%disx||b%disy){
			cout<<"No"<<endl;
		}else{
			cout<<"Yes"<<endl;
		}
	}
	return 0;
}
