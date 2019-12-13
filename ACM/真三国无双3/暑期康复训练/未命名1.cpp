#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	string a,g;
	int n,s;
	while(scanf("%d",&n)==1){
		cout<<"Round "<<n<<endl;
		if(n==-1)break;
		cin>>a>>g;
		s=a.size(); 
		int draw=0,num=0,judge=0,let[27]={0};
		while(draw<7){
			if(g[num]==' '){
				for(int i=0;i<s;++i){
		        	if(!let[a[i]-'a']){
		        		judge=2;break;
		        	}
	        	}
				judge=1;			
			}
			if(judge==2||judge==1){
				break;
			}
			for(int i=0;i<s;++i){
				if(g[num]==a[i]&&let[g[num]-'a']==0){
					judge=1;let[g[num]-'a']=1;
				}
			} 
			for(int i=0;i<27;++i){
				cout<<let[i];
			} 
			cout<<endl;
			++num;
			if(!judge){
				++draw;
			}
		}
		if(judge!=2){
			judge=1;
			for(int i=0;i<s;++i){
		    	if(!let[a[i]-'a']){
		    		cout<<"lose"<<endl;judge=0;break;
		    	}
	    	}
	    	if(judge){
		    	cout<<"win"<<endl;
	    	}
		}else{
			cout<<"You chickened out"<<endl;
		}		
	}
	return 0;
} 
