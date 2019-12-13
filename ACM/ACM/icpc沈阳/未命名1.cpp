#include<bits/stdc++.h>
using namespace std;

int prime[]={1,2,3,5,7,11,13,17,23,31,37,53,71,73,113,131,137,173,311,317};

int isp(int a){
	for(int i=0;i<23;++i){
		
	}
	return 1;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	string s;
	cin>>t;
	int t1=t;
	while(t--){
		cout<<"Case #"<<t1-t<<": ";
		cin>>s;
		int n=s.size();
		if(n>=5){
			cout<<3137<<endl;
			continue;
		}
		int s1=stoi(s);
		int ans;
		cout<<prime[19]<<endl;
		for(int i=19;i>=0;--i){
			if(prime[i]<=s1){
				ans=prime[i];break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
