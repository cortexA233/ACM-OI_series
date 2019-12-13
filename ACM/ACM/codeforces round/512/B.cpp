#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,d,m,x[1009],y[1009];

int jud1(int x,int y){
	if(x<=d&&x>=0){
		if(y>=d-x&&y<=x+d) return 1;
		else return 0;
	}
	if(x>d&&x<=n-d){
		if(y>=x-d&&y<=x+d) return 1;
		else return 0;
	}
	if(x>n-d&&x<=n){
		if(y>=x-d&&y<=2*n-d-x) return 1;
		else return 0;
	}
	return 0;
}

int jud2(int x,int y){
	if(x<=n-d&&x>=0){
		if(y>=d-x&&y<=x+d) return 1;
		else return 0;
	}
	if(x>n-d&&x<=d){
		if(y>=-x+d&&y<=-x+2*n-d) return 1;
		else return 0;
	}
	if(x>d&&x<=n){
		if(y>=x-d&&y<=2*n-d-x) return 1;
		else return 0;
	}
	return 0;
}

int main(){
	ios::sync_with_stdio(false);
	cin>>n>>d;
	cin>>m;
	if(n>=d*2){
		for(int i=0;i<m;++i){
			cin>>x[i]>>y[i];
			if(jud1(x[i],y[i])) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}		
	}else{
		for(int i=0;i<m;++i){
			cin>>x[i]>>y[i];
			if(jud2(x[i],y[i])) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}

	return 0;
}
