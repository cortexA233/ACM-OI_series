#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int fabs(int a){
	if(a<0)return -a;
	return a;
}

int main(){
    int l,minn2,n,m[1000009],t,minn,maxn;
    cin>>t;
    while(t){
	    maxn=0;
    	--t;
    	cin>>l>>n;
        for(int i=0;i<n;++i){
            cin>>m[i];
        }   
		minn=min(m[0],l-m[0]); 
		minn2=fabs(m[0]-l+m[0]);
        for(int i=0;i<n;++i){
            if(m[i]-0>maxn||l-m[i]>maxn)maxn=max(m[i],l-m[i]);
			if(fabs(m[i]-l+m[i])<minn2){
				minn=min(m[i],l-m[i]);
				minn2=fabs(m[i]-l+m[i]);
			}
        }    
        cout<<minn<<" "<<maxn<<endl;
	}
    return 0;
}    

