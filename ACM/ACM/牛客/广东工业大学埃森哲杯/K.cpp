#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
using namespace std;

char a[100009];
int n,len,j;

int main(){
	int t;
	cin>>t;
	while(t){
		--t; 
		cin>>n;
		scanf("%s",&a);
        len=strlen(a);
//		cout<<len<<endl;
		int bujin=2*n-2;
		if(n==1){
			printf("%s\n",a);
			continue;
		}
		for(int i=0;i<n;++i){
			j=0;//ÆæÅ¼ÐÔ 
			for(int o=i;o<len;++j){
				if(o>=len)break;
				if((j%2)==0){
					if(bujin==2*i)continue;
					printf("%c",a[o]);
			    //	printf("%d",o);
					o=o+bujin-(2*i);
				} 
				if((j%2)==1){
					if(!(2*i))continue;
					printf("%c",a[o]);
				//  printf("%d",o);
					o=o+(2*i);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
