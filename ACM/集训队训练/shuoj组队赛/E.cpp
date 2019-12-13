#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
    int h,t,v,x;
    scanf("%d",&T);
    double minn,maxx;
    while(T--){
    	scanf("%d%d%d%d",&h,&t,&v,&x);
        int tt=t*x;
        if(tt>=h){
            minn=0;
            maxx=h/(x*1.0);
        }
        else{
            minn=(h-x*t*1.0)/(v-x);
            maxx=t;
        }
        printf("%.4lf %.4lf\n",minn,maxx);
    }
    return 0;
}
/*
1
10000 500 50 10
*/
