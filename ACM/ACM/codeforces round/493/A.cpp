#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int n,a[10000],s=0;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a[i];s+=a[i];
	}
	if(n==1) 
	{
		cout<<-1;
		return 0;
	}
	if(n==2){
		if(a[0]==a[1]) cout<<-1;
		else cout<<1<<endl<<1;
		return 0;
	}
	int minn=1000000;
	for(int i=0;i<n;++i){
		if(a[i]<=minn) minn=a[i];
	}s-=minn;
//	cout<<minn<<endl;
	if(s!=minn){
		cout<<1<<endl;
		for(int i=0;i<n;++i){
			if(a[i]==minn){
				cout<<i+1;break;
			}
		}
	}else cout<<-1;
	return 0;
}
