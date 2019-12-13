#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;

int main(){
	int n,c1,c5,c10,c50,c100,c500,ans=0;
	cin>>n;
	cin>>c1>>c5>>c10>>c50>>c100>>c500;
	while(n){
		if(c500&&n>=500){
			--c500;n-=500;++ans;
		}
		if((c100&&n>=100&&n<500)||(c100&&!c500&&n>=100)){
			--c100;n-=100;++ans;
		}
		if((c50&&n>=50&&n<100)||(c50&&!c100&&n>=50)){
			--c50;n-=50;++ans;
		}
		if((c10&&n>=10&&n<50)||(c10&&!c50&&n>=10)){
			--c10;n-=10;++ans;
		}
		if((c5&&n>=5&&n<10)||(c5&&!c10&&n>=10)){
			--c5;n-=5;++ans;
		} 
		if((c1&&n>=1&&n<5)||(c1&&!c5&&n>=1)){
			--c1;n-=1;++ans;
		}
	}
	cout<<c1<<" "<<c5<<" "<<c10<<" "<<c50<<" "<<c100<<" "<<c500<<endl<<ans;
	return 0;
}
