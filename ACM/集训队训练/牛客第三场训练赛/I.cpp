#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
#include<cstdio>
using namespace std;

double fabs(double a){
	if(a<0)return -a;
	return a;
}

int absn(int a){
	if(a<0)return -a;
	return a;
}

int gcd(int a,int b){
	int t;
	if(b>a){
		t=a;
		a=b;
		b=t;
	}
	while(b!=a){
		if(a%b==0)break;
		a=a%b;
	    t=a;
	   	a=b;
	   	b=t;
	   	if(a%b==0)break;
	}
	return b;
}

int main(){
	int abx,aby,bcx,bcy,acx,acy;
	int xa,xb,xc,ya,yb,yc;
	int ap,bp,cp;
	double s;
	while(1){
		scanf("%d",&xa);if(xa==-1)break;
		scanf("%d%d%d%d%d",&ya,&xb,&yb,&xc,&yc);
		abx=absn(xa-xb);aby=absn(ya-yb);bcx=absn(xb-xc);bcy=absn(yb-yc);acx=absn(xa-xc);acy=absn(ya-yc);
		s=fabs(xa*yb-xb*ya+xb*yc-xc*yb+xc*ya-xa*yc)/2;
		if(!abx||!aby){
        	if(!abx){
        		cp=aby;
			}
        	if(!aby){
        		cp=abx;
			}
		}else{
			cp=gcd(abx,aby);
		}
		if(!bcx||!bcy){
        	if(!bcx){
        		ap=bcy;
			}
        	if(!bcy){
        		ap=bcx;
			}
		}else{
			ap=gcd(bcx,bcy);
		}	
		if(!acx||!acy){
        	if(!acx){
        		bp=acy;
			}
        	if(!acy){
        		bp=acx;
			}
		}else{
			bp=gcd(acx,acy);
		}
		int np=1+s-(ap+bp+cp)/2;
		printf("%.1llf %d %d %d %d\n",s,np,cp-1,ap-1,bp-1);
	}
	return 0;
}
