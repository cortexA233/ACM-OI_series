#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5+19;
int is[N];
ll prime[N];
int cnt = 0;
void getp()
{
//	clr(is, 1);
	memset(is,1,sizeof(is));
	is[0] = is[1] = 0;
	for (ll i = 2; i < N; i++)
	{
		if (is[i])
			prime[++cnt] = i;
		for (int j = 1; j <= cnt && i*prime[j] < N; j++)
		{
			is[i*prime[j]] = 0;
			if (!(i%prime[j]))
				break;
		}
	}
}

ll a[100009];

ll cal(){
	a[0]=0;a[1]=2;
	for(int i=2;i<=100000;++i){
		a[i]=(3*a[i-1]-a[i-2])/2+i+1;
	}
}

int main(){
	getp();
	cout<<((-1)%6);
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n,m;
	cal();
	while(cin>>m){
		ll ans=0;
		for(ll i=2;i<m;++i){
			if(__gcd(i,m)==1){
				ans+=a[i];
				cout<<i<<" ";
			}
		}cout<<endl;
		cout<<ans<<endl;
	}
	return 0;
}
