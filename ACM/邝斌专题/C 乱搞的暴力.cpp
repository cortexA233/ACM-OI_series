#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring> 
#include<queue>
using namespace std;

int n,k,dp[400009];

void bfs(){
	queue<int> q;
	q.push(n);
	int nx,tx;
	while(q.size()){
		nx=q.front();		
		q.pop();
		if(nx==k) continue;
		if(nx<k&&nx>=0){
			tx=nx+1;
	    	if(tx>=0){
	    		if(dp[nx]+1<dp[tx]){
	    			dp[tx]=dp[nx]+1;
	    			if(tx!=k)
	    			    q.push(tx);
	    		}	
	    	}
	    	tx=nx*2;
	    	if(tx>=0){
	    		if(dp[nx]+1<dp[tx]){
	    			dp[tx]=dp[nx]+1;
	    			if(tx!=k)
					    q.push(tx);
	    		}	
	    	}
		}	
		tx=nx-1;
		if(tx>=0){
			if(dp[nx]+1<dp[tx]){
				dp[tx]=dp[nx]+1;
				if(tx!=k)
				    q.push(tx);
			}
		} 
	//	if(tx==k) continue;
	}
}

int main(){	
	cin>>n>>k;
    for(int i=100000;i>=0;--i){
    	dp[i]=200000000;
    }
    dp[n]=0;
    bfs();
    cout<<dp[k]<<endl;
	return 0;
}
