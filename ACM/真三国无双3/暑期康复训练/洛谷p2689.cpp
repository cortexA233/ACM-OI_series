#include<iostream>
#include<cstring>
#include<cstdio>
//#include<string>
//#include<algorithm>
using namespace std;

int a,x,b,y,t,dir[100],ans=123456789;

int main(){
	int disx,disy,ne,ns,nn,nw;
	char temp;
	scanf("%d%d%d%d%d",&a,&b,&x,&y,&t);
	for(int i=0;i<t;++i){
		cin>>temp;
		if(temp=='E'){
			++ne;
		}
		if(temp=='S'){
			++ns;
		}
		if(temp=='W'){
			++nw;
		}
		if(temp=='N'){
			+nn;
		}
	}
    disx=x-a;disy=y-b;
	if(disx>0&&disy>0){
		if(ne>=disx&&ns>=disy){
			cout<<disx+disy;
		}else{
			cout<<-1;
		}
	}
	if(disx>0&&disy<=0){
		if(ne>=disx&&nn>=-disy){
			cout<<disx-disy;
		}else{
			cout<<-1;
		}
	}
	if(disx<=0&&disy>0){
		if(nw>=-disx&&ns>=disy){
			cout<<disy-disx;
		}else{
			cout<<-1;
		}
	}
	if(disx<=0&&disy<=0){
		if(nw>=-disx&&ns>=-disy){
			cout<<-disy-disx;
		}else{
			cout<<-1;
		}
	}
	return 0;
} 






