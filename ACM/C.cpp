#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LL long long
#define ml Miller_Rabin
ll pri[1000009];
ll cnt=0;
ll isp[1000009];
ll isp2[1000009];

LL prime[6] = {2, 3, 5, 233, 331};
LL qmul(LL x, LL y, LL mod) { // 乘法防止溢出， 如果p * p不爆LL的话可以直接乘； O(1)乘法或者转化成二进制加法
 
 
    return (x * y - (long long)(x / (long double)mod * y + 1e-3) *mod + mod) % mod;
    /*
	LL ret = 0;
	while(y) {
		if(y & 1)
			ret = (ret + x) % mod;
		x = x * 2 % mod;
		y >>= 1;
	}
	return ret;
	*/
}
LL qpow(LL a, LL n, LL mod) {
    LL ret = 1;
    while(n) {
        if(n & 1) ret = qmul(ret, a, mod);
        a = qmul(a, a, mod);
        n >>= 1;
    }
    return ret;
}
bool Miller_Rabin(LL p) {
    if(p < 2) return 0;
    if(p != 2 && p % 2 == 0) return 0;
    LL s = p - 1;
    while(! (s & 1)) s >>= 1;
    for(int i = 0; i < 5; ++i) {
        if(p == prime[i]) return 1;
        LL t = s, m = qpow(prime[i], s, p);
        while(t != p - 1 && m != 1 && m != p - 1) {
            m = qmul(m, m, p);
            t <<= 1;
        }
        if(m != p - 1 && !(t & 1)) return 0;
    }
    return 1;
}

struct st{
	ll a,b,c;
	friend bool operator<(const st &a,const st &b)
	{
		return a.a<b.a;
	}
};

set<st> gg;

void getp(){
	for(ll i=0;i<100005;++i){
		isp[i]=1;
		isp2[i]=1;
	}isp[1]=0;
	for(ll i=2;i<=100005;++i){
		if(!pri[i]){
			pri[++pri[0]]=i;
		}
		for(ll j=1;j<=pri[0]&&pri[j]<=100005/i;++j){
			isp[i*pri[j]]=0;
			pri[pri[j]*i]=1;
			if(i%pri[j]==0){
				break;
			}
		}
	}
}

ll notp[1000009];
ll pri2[1000009];

void getp2(ll l,ll r){
	for(ll i=0;i<100005;++i){
		notp[i]=0;
	}
	if(l<2) l=2;
	for(ll i=1;i<=pri[0]&&(ll)pri[i]*pri[i]<=r;++i){
		ll s=l/pri[i]+(l%pri[i]>0);
		if(s==1) s=2;
		for(ll j=s;j*pri[i]<=r;++j){
			if(j*pri[i]>=l&&j*pri[i]<=r){
			//	isp2[j*pri[i]-l]=0;
				ll issu=0;
				if(j<=100000){
					if(isp[j]==1){
						issu=1;
					//	cout<<j<<endl;
					}
				}else{
					if(ml(j)==1){
						issu=1;
					}
				}
			/*	for(ll ii=1;ii<=pri2[0];++ii){
					if(j==pri2[ii]){
						issu=1;break;
					}
				}*/
				if(issu){
				//	cout<<j*pri[i]<<" "<<j<<" "<<pri[i]<<endl;
					st g;
					g.a=j*pri[i];
					if(j<pri[i]){
						g.b=j;
						g.c=pri[i];	
					}else{
						g.c=j;
						g.b=pri[i];
					}
					gg.insert(g);
				}
				notp[j*pri[i]-l]=1;
			}
		}
	}
	pri2[0]=0;
	for(ll i=0;i<r-l;++i){
		if(!notp[i]){
			pri2[++pri2[0]]=i+l;
		}
	}
}

int main(){
	getp();
	ll l,r;
	scanf("%lld%lld",&l,&r);
	getp2(l,r);
	/*
	for(int i=l;i<=r;++i){
		if(isp2[i-l]) cout<<i<<endl;
	}
	*/
//	cout<<pri2[0]<<"!"<<endl;
	int gs=gg.size(); 
	printf("%d\n",gs);
	for (auto c:gg)
		printf("%lld %lld %lld\n",c.a,c.b,c.c);
	return 0;
}

/*
100000000 100000099
1 10
*/

/*
4
4 2 2
6 2 3
9 3 3
10 2 5
*/
