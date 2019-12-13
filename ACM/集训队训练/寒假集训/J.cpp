#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const double pi=acos(-1.0);

int main(){
	double a,b,f;
	scanf("%lf%lf%lf",&a,&b,&f);
    f=180-f;
    f=f/(180/pi);
    double c=a*a+b*b-2*a*b*cos(f);
    c=sqrt(c);
	printf("%.8lf",c);
	return 0;
}
