#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios::sync_with_stdio(false);
	int r;
	int n;
	cin>>n>>r;
	int a[1009];
	int b[1009]={0};
	int num=1;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	ll ans=0;int fl;
	for(int i=0;i<n;++i){
	//	cout<<ans<<endl;
		if(!b[i]){
			fl=0;
			for(int o=i+r-1;o>=i;--o){
				if(o>=n) continue;
				if(a[o]){
					fl=1;
					for(int p=o-r+1;p<o+r;++p){
						if(p<0||p>=n) continue;
						b[p]=1;
					}
					++ans;
					break;
				}
			}
			if(!fl){
				for(int o=i-r+1;o<=i;++o){
					if(o<0) continue;
					if(a[o]){
						fl=1;
						for(int p=o-r+1;p<o+r;++p){
							if(p<0||p>=n) continue;
							b[p]=1;
						}
						++ans;
						break;
					}
				}
			}
			if(!fl) break;
		}
	}
	if(!fl){
		cout<<-1;
		return 0;
	}
	cout<<ans;
	return 0;
}
