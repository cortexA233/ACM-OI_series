#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t,n,a[1111];
	cin>>t;
	while(t){
		--t;
		cin>>n;
		for(int i=0;i<n;++i){
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		for(int i=0;i<n;++i){
			printf("%d",a[i]);
			if(i!=n-1)cout<<" ";
		}cout<<endl;
	}
	return 0;
}
