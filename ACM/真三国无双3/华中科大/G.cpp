#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n,m[109],s[109][109],num=0;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>m[i];num+=m[i];
		for(int o=0;o<m[i];++o){
			scanf("%d",&s[i][o]);
		}
	}
	int cu=1;//swh是1，lly是0
	long long sums=0,suml=0;
	for(int i=0;i<num;++i){
		if(cu){
			int maxn=-1,maxi=0;
			--cu;
			for(int o=0;o<n;++o){
			    if(s[o][0]>maxn){
			    	maxn=s[o][0];
			    	maxi=o;
				}
	    	}
	    	//删除操作 
	    	for(int o=0;o<m[maxi];++o){
	    		s[maxi][o]=s[maxi][o+1];
			}
			--m[maxi];
	    	sums+=maxn;
		}
		if(!cu){
			int maxn=-1,maxi=0;
			++cu;
			for(int o=0;o<n;++o){
				if(s[o][m[o]]>maxn){
					maxn=s[o][m[o]];
					maxi=o;
				}
			}
			//删除操作 
			s[maxi][m[maxi]]=-1;
			--m[maxi];
			suml+=maxn;
		}
	}
	cout<<sums<<" "<<suml;
	return 0;
}
