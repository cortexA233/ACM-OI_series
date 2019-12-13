#include<bits/stdc++.h>
using namespace std;
#define ll long long

int dp[109][109];
char a[109],b[109];
 
int ed(){
    int len1=strlen(a+1);
    int len2=strlen(b+1);
    for(int i=1;i<=len1;i++){
    	for(int o=1;o<=len2;o++){
        	dp[i][o]=1000000;
		}
	}
    for(int i=1;i<=len1;i++) dp[i][0]=i;
    for(int o=1;o<=len2;o++) dp[0][o]=o;
    for(int i=1;i<=len1;i++){
        for(int o=1;o<=len2;o++){
            int flag;
            if(a[i]==b[o]) flag=0;
            else flag=1;
            dp[i][o]=min(dp[i-1][o]+1,min(dp[i][o-1]+1,dp[i-1][o-1]+flag));
        }
    }
    return dp[len1][len2];
}

int main(){
	scanf("%s%s",a+1,b+1);
	int ans=ed();
//	cout<<ans; 
	if(ans<=2) cout<<"YES";
	else cout<<"NO";
	return 0;
}
