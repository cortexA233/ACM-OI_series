#include<bits/stdc++.h>
using namespace std;
#define ll long long
//�ú������ڻ�ȡÿ����Ŀ�ɻ�õķ��� 
int gets(double a){
	if(a>(1.0/2.0)&&a<=1) return 500;
	if(a>(1.0/4.0)&&a<=(1.0/2.0)) return 1000;
	if(a>(1.0/8.0)&&a<=(1.0/4.0)) return 1500;
	if(a>(1.0/16.0)&&a<=(1.0/8.0)) return 2000;
	if(a>(1.0/32.0)&&a<=(1.0/16.0)) return 2500;
	if(a>=0&&a<=(1.0/32.0)) return 3000;
}

int main(){
	ll a[200][10],ans;
	int n;
	//���� 
	cin>>n;
	int ac[10]={0};
	for(int i=0;i<n;++i){
		for(int o=0;o<5;++o){
			cin>>a[i][o];
			if(a[i][o]>=0) ++ac[o];
		}
	}
	//xh�����ʾС����Ҫ�ύ����Ŀ����Ҫ�ύ��ֵΪ1������Ҫ��Ϊ0 
	int xh[10]={0};
	for(int i=0;i<5;++i){
		if(a[0][i]>=a[1][i]&&a[1][i]>=0) xh[i]=1; 
	}
	//sum1��sum2��ʾX��Y�ķ�����oth��ʾ������������������С�ţ� 
	double oth=1.0*n;
	int sum1=0,sum2=0;
	//�ȼ���һ�鲻��С�ŵ���������Ѿ�������ֱ�����0 
	for(int o=0;o<5;++o){
		if(a[0][o]>=0) sum1+=gets(ac[o]*1.0/oth*1.0)*(1.0-(a[0][o]*1.0/250.0));
	}
	for(int o=0;o<5;++o){
		if(a[1][o]>=0) sum2+=gets(ac[o]*1.0/oth*1.0)*(1.0-(a[1][o]*1.0/250.0));
	}
	if(sum1>sum2){
		cout<<0;
		return 0;
	}
	//����ö�ٹ��̣���С����ö����Ҫ����С��������flag������ʾ�Ƿ���ڿ��еķ��� 
	int flag=0;
	for(int i=1;i<=4001;++i){
		sum1=0;sum2=0;oth=oth+1;
		for(int o=0;o<5;++o){
			if(xh[o]==1) ++ac[o];
		}
		for(int o=0;o<5;++o){
			if(a[0][o]>=0) sum1+=gets(ac[o]*1.0/oth*1.0)*(1.0-(a[0][o]*1.0/250.0));
		}
		for(int o=0;o<5;++o){
			if(a[1][o]>=0) sum2+=gets(ac[o]*1.0/oth*1.0)*(1.0-(a[1][o]*1.0/250.0));
		}
		//���������������ֱ���˳�ö�ٹ��� 
		if(sum1>sum2){
			flag=1;
			ans=i;break;
		}
	}
	//����� 
	if(!flag) cout<<-1;
	else cout<<ans;
	return 0;
}
