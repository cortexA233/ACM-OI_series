#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int main(){
	int n,a[100009];
	cin>>n;
	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
	}
	if(n>10){
		int mark=0,qc[10];
		for(int i=1;i<n;++i){
			qc[i]=a[i]-a[i-1]; 
		}
		sort(qc+1,qc+n);
		int maxc=0,cc=1,cu=qc[1];
		for(int i=2;i<n;++i){
			if(qc[i]==qc[i-1]){
				++cc;
				if(cc>maxc){
					maxc=cc;
					cu=qc[i];
				}
			}else{
				cc=1;
			}
		}
		cout<<cu;
		if(a[n-3]-a[0]==cu*(n-4)){
			for(int i=1;i<n;++i){
				a[i]=a[0];
			}
		}
	}
	return 0;
}
