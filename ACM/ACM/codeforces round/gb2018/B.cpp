#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct st{
	int a;
	int b;
};

int cmp(st a,st b){
	if(a.a!=b.a) return a.a<b.a;
	return a.b<b.b;
}

int main(){
	st s[1009];
	ios::sync_with_stdio(0);
	int n,x[1009],y[1009];
	cin>>n; 
	for(int i=0;i<n;++i){
		cin>>x[i]>>y[i];
	}
	for(int i=0;i<n;++i){
		cin>>s[i].a>>s[i].b;
	}
	sort(s,s+n,cmp);
	int ansx,ansy,j[10009],cx,cy;
	int flag=0;
	for(int i=0;i<n;++i){
		memset(j,sizeof(j),0);
		j[i]=0;
		cx=s[i].a+x[0];
		cy=s[i].b+y[0];
		for(int o=1;o<n;++o){
			int le=0,ri=n-1,mid,fl=0;
			while(x[o]+s[mid].a!=cx||y[o]+s[mid].b!=cy){
				mid=(le+ri)>>1;
				if(x[o]+s[mid].a<cx){
					le=mid;continue;
				}
				if(x[o]+s[mid].a>cx){
					ri=mid;continue;
				}
				if(y[o]+s[mid].b>cy){
					ri=mid;continue;
				}
				if(y[o]+s[mid].b<cy){
					le=mid;continue;
				}
				if(x[o]+s[mid].a==cx&&y[o]+s[mid].b==cy&&j[mid]==0){
					j[mid]=1;
					fl=1;break;
				}
			}
			if(fl==0){
				flag=0;break;
			}else{
				flag=1;
			}
		}
		if(flag==1){
			ansx=cx;ansy=cy;
			break;
		}
	}
	cout<<cx<<" "<<cy;
}
