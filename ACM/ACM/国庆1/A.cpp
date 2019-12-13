#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	cout<<min(a,e)+min(b,f)+min(c,d);
	return 0;
}
