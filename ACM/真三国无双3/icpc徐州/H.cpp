#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a[100009],a1[100009];
ll f[100009],f1[100009];
int n,q;

ll lowb(ll x){
	return x&-x;
}

ll que(ll *ff,ll x){
	ll ans=0;
	while(x>0){
		ans+=ff[x];
		x-=lowb(x);
	}
}

void add(ll *ff,ll x,ll v){
    while(x<=n){
    	ff[x]+=v;
    	x+=lowb(x);
	}
} 

int main(){
	scanf("%d%d",&n,&q);
    for(int i=1;i<=n;++i){
    	scanf("%lld",&a[i]);
    	a1[i]=(n-i+1)*a[i];
    	f[i]=que(f,i);
	}
	int typ,l,r;
	for(int i=0;i<q;++i){
		scanf("%d%d%d",&typ,&l,&r);
		if(typ==2){
			a[l]=r;
			add(f1,l,-a[l]*(n-l+1));
			add(f1,l,r*(n-l+1));
		}
		if(typ==1){
			printf("%lld\n",que(f1,r)-que(f1,l-1)-(n-r)*(que(f,r)-que(f,l-1)));
		}
	}
	return 0;
}



/*
clude <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <map>
#include <algorithm>
#include <string>

#define lowbit(x) (x&-x)
typedef long long ll;
using namespace std;

const int maxn = 1e6 + 5;

ll t1[maxn], t2[maxn];
int n;

void add(ll *t,int x, ll d)
{
	while (x <= n)
	{
		t[x] += d;
		x += lowbit(x);
	}
}

ll sum(ll *t, int x)
{
	ll ans = 0;
	while (x)
	{
		ans += t[x];
		x -= lowbit(x);
	}
	return ans;
}

ll a[maxn];

int main()
{
	int q;
	scanf("%d%d", &n, &q);
	ll x;
	for (int i = 1; i <= n; i++)
	{
		scanf("%lld", &x); a[i] = x;
		add(t1, i, x*(n - i + 1));
		add(t2, i, x);
	}

	int opt, y;
	while (q--)
	{
		scanf("%d%d%lld", &opt, &y, &x);
		if (opt == 1)
		{
			printf("%lld\n", (sum(t1, x) - sum(t1, y - 1)) - (ll)(n - x)*(sum(t2, x) - sum(t2, y - 1)));
		}
		else
		{
			add(t1, y, -a[y] * (n - y + 1));
			add(t1, y, x*(n - y + 1));
			add(t2, y, -a[y]);
			add(t2, y, x);
			a[y] = x;
		}
	}
}

*/
