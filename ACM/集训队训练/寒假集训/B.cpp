#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const double pi=acos(-1.0);

int main(){
	int n,m;
	cin>>n>>m;
	if((n*m)%2){
		cout<<-1;
		return 0;
	}
	if((n==1&&m>2)||(n>2&&m==1)){
		cout<<-1;
		return 0;
	}
	if(n==1&&m==2){
		cout<<"RL";
		return 0;
	}
	if(n==2&&m==1){
		cout<<"DU";
		return 0;
	}
	if(n==2&&m==2){
		cout<<"RDLU";
		return 0;
	}
	int cx=0,cy=0;
	int j[10][10]={0};
	if(n%2==1&&m%2==0){
		for(int i=1;i<m;++i){
			cout<<"R";
		}
		for(int i=1;i<n;++i){
			cout<<"D";
		}
		cout<<"L";
		int lim=n*m-n-m,fl=1,cy=n-1;
		for(int i=1;i<lim;++i){
		//	cout<<"("<<cy<<")";
			if(fl){
				cout<<"U";
				--cy; 
			}else{
				cout<<"D";
				++cy;
			}
			if(cy>=n-1){
				cout<<"L";fl=1;++i;
			}
			if(cy<=1){
				cout<<"L";fl=0;++i;
			}
		}
		cout<<"UU";
		return 0;
	}
	if(n%2==0&&m%2==1){
		for(int i=1;i<m;++i){
			j[0][i]=1;
			cout<<"R";
		}
		for(int i=1;i<n;++i){
			j[i][m-1]=1;
			cout<<"D";
		}
		cout<<"L";
		int lim=n*m-n-m,fl=1,cx=m-2;
		for(int i=0;i<lim;++i){
	//		cout<<"("<<cx<<")";
			if(fl==1){
				cout<<"L";
				--cx;
			}else{
				cout<<"R";
				++cx;
			}
			if(cx>=m-2){
				cout<<"U";fl=1;++i;
			}
			if(cx<=0){
				cout<<"U";fl=0;++i;
			}
		}
		return 0;
	}else{
		for(int i=1;i<m;++i){
			j[0][i]=1;
			cout<<"R";
		}
		for(int i=1;i<n;++i){
			j[i][m-1]=1;
			cout<<"D";
		}
		cout<<"L";
		int lim=n*m-n-m,fl=1,cx=m-2;
		for(int i=0;i<lim;++i){
			if(fl==1){
				cout<<"L";
				--cx;
			}else{
				cout<<"R";
				++cx;
			}
			if(cx>=m-2){
				cout<<"U";fl=1;++i;
			}
			if(cx<=0){
				cout<<"U";fl=0;++i;
			}
		}
		return 0;
	}
	return 0;
}
