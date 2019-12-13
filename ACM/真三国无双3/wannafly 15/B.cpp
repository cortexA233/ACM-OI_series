#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
	int n,sum[6]={0},ans=0;
	int g[100009],a[100009];
	cin>>n;
	for(int i=0;i<n;++i){
		scanf("%d",&g[i]);
		++sum[g[i]];
	}
	while(n){
		if(sum[5]){
			n-=sum[5];
			ans+=sum[5];
			sum[5]=0;
			continue;
		}
		if(sum[4]&&sum[1]){
			--sum[4];--sum[1];++ans;n-=2;
			continue;
		}
		if(sum[2]&&sum[3]){
			--sum[2];--sum[3];++ans;n-=2;
			continue;
		}
		if(sum[2]&&sum[1]>=3){
			--sum[2];sum[1]-=3;++ans;n-=4;
			continue;
		}
		if(sum[3]&&sum[1]>=2){
			--sum[3];sum[1]-=2;++ans;n-=3;
			continue;
		}
		if(sum[2]>=2&&sum[1]){
			sum[2]-=2;--sum[1];++ans;n-=3;
			continue;
		}
		if(sum[1]>=5){
			n-=sum[1]-(sum[1]%5);
			ans+=sum[1]/5;
			sum[1]=sum[1]%5;
			continue;
		}
		break;
	}
    while(n){
		if(sum[4]){
			n-=sum[4];
			ans+=sum[4];
			sum[4]=0;
			continue;
		}
		if(sum[2]>=2){
			sum[2]-=2;++ans;n-=2;
			continue;
		}
		if(sum[2]&&sum[1]>=2){
			--sum[2];sum[1]-=2;++ans;n-=3;
			continue;
		}
		if(sum[3]&&sum[1]){
			--sum[3];--sum[1];++ans;n-=2;
			continue;
		}
		if(sum[1]>=4){
			n-=sum[1]-(sum[1]%4);
			ans+=sum[1]/4;
			sum[1]=sum[1]%4;
			continue;
		}
		break;
	}
	while(n){
		if(sum[3]){
			n-=sum[3];
			ans+=sum[3];
			sum[3]=0;
			continue;
		}
		if(sum[2]&&sum[1]){
			--sum[2];--sum[1];++ans;n-=2;
			continue;
		}
		if(sum[1]>=3){
			n-=sum[1]-(sum[1]%3);
			ans+=sum[1]/3;
			sum[1]=sum[1]%3;
			continue;
		}
		break;
	}
	while(n){
		if(sum[2]){
			n-=sum[2];
			ans+=sum[2];
			sum[2]=0;
			continue;
		}
		if(sum[1]>=2){
			n-=sum[1]-(sum[1]%2);
			ans+=sum[1]/2;
			sum[1]=sum[1]%2;
			continue;
		}
		break;
	}
	for(int i=0;i<n;++i){
		if(sum[1]){
			--sum[1];a[i]=1;continue;
		}
		if(sum[2]){
			--sum[2];a[i]=2;continue;
		}
		if(sum[3]){
			--sum[3];a[i]=3;continue;
		}
		if(sum[4]){
			--sum[4];a[i]=4;continue;
		}
	}
/*	for(int i=0;i<n;++i){
		cout<<a[i]<<" ";
	}cout<<endl;*/
	int car=5;
	for(int i=0;i<n;++i){
		if(car-a[i]>=0) car-=a[i];
		else{
			car=5;car-=a[i];++ans;
		}
	}
	if(car<5&&car!=0)++ans;
	cout<<ans;
	return 0;
}
