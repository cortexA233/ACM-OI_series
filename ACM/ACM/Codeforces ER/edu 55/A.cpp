#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	int t,n,x,y,d,a[10000];
	string s;
	cin>>t;
	for(int i=0;i<t;++i){
		cin>>n>>x>>y>>d;
		int ans1=0,ans2=0;
		if(abs(x-y)%d){
			ans1+=(n-x)/d+((n-x)%d?1:0);
			ans2+=(x)/d+((x)%d?1:0);
			if(abs(y-1)%d) ans2=-1;
			if(abs(y-n)%d) ans1=-1;
			if(ans2<0&&ans1>=0){
				ans1+=abs(y-n)/d;
				cout<<ans1<<endl;
				continue;
			}
			if(ans1<0&&ans2>=0){
				ans2+=abs(y)/d;
				cout<<ans2<<endl;
				continue;
			}
			if(ans1<0&&ans2<0){
				cout<<-1<<endl;
				continue;
			} 
			if(ans1>=0&&ans2>=0){
				ans1+=abs(y-n)/d;
				ans2+=abs(y)/d;
				cout<<min(ans1,ans2)<<endl;
				continue;
			} 
			cout<<"!"<<endl;
		}else{
			cout<<abs(x-y)/d<<endl;
		}
	}
	return 0;
}
