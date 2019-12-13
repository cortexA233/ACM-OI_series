#include<bits/stdc++.h>
using namespace std;

int nab(int a){
	if(a>0) return a;
	return -a;
}

int ma(char a){
	return min(nab(a-'A'),'Z'-a+1);
}
int mc(char a){
	return min(nab(a-'C'),'Z'-a+3);
}
int mt(char a){
	return min(nab(a-'T'),'Z'-a+19);
}
int mg(char a){
	return min(nab(a-'G'),'Z'-a+7);
}

int main(){
	int n;
	string s;
	cin>>n;
	cin>>s;
	int ans=111111111;
	for(int i=0;i<n;++i){
		if(i+3>=n)break;
		if(ma(s[i])+mc(s[i+1])+mt(s[i+2])+mg(s[i+3])<ans) ans=ma(s[i])+mc(s[i+1])+mt(s[i+2])+mg(s[i+3]);
	}
	cout<<ans;
	return 0;
} 
