#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	double a,b;
	scanf("%d",&n);
	while(n--){
		scanf("%lf%lf",&a,&b);
		printf("%.9lf\n",1/a-1/(b+1));
	}
	return 0;
}
