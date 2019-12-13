#include<bits/stdc++.h>
#pragma warning(disable:4996);
#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<cstring>
#include<map>
#include<algorithm>
#include<queue>
#include<functional>
#include<stack>
#include<sstream>
#include<cmath>
#include<set>
#include<iomanip>
#include<unordered_set>
#include<unordered_map>

using namespace std;

#define pb push_back
#define x first
#define y second
#define pii pair<int ,int >
#define piis pair<pii,stack<int> >
#define piii pair<pii,int >
#define ll long long
#define ld long double
#define tos to_string
#define mp make_pair
#define clr(a,b) memset(a,b,sizeof(a))
#define INF 0x3f3f3f3f
#define VI vector<int >
#define VII vector <vector <int > >
#define QIN ios::sync_with_stdio(false); cin.tie(0) 
#define ps system("pause")
#define lson pos<<1
#define rson pos<<1|1
#define Lson l,mid,lson
#define Rson mid+1,r,rson


ll gcd(ll a, ll b)
{
	return b == 0 ? a: gcd(b, a%b);
}


int main()
{
	QIN;
	int n;
	cin >> n;
	string A("A"), B("B"), C("C"), AB("AB"), AC("AC"), BC("BC"), ABC("ABC");
	map<string, ll> a;
	for (int i = 1; i <= n; i++)
	{
		ll val;
		string s;
		cin >> val >> s;
		sort(s.begin(), s.end());
		if (a[s] == 0)
			a[s] = val;
		a[s] = min(a[s], val);
	}
	ll ans = 1e16;
	if (a[A] && a[B] && a[C])
		ans = min(ans, a[A] + a[B] + a[C]);
	if (a[A] && a[BC])
		ans = min(ans, a[A] + a[BC]);
	if (a[B] && a[AC])
		ans = min(ans, a[B] + a[AC]);
	if (a[C] && a[AB])
		ans = min(ans, a[C] + a[AB]);
	if (a[ABC])
		ans = min(ans, a[ABC]);
	if (a[AB] && a[AC])
		ans = min(ans, a[AB] + a[AC]);
	if (a[AC] && a[BC])
		ans = min(ans, a[AC] + a[BC]);
	if (a[BC] && a[AB])
		ans = min(ans, a[BC] + a[AB]);
	cout << (ans == 1e16 ? -1 : ans) << endl;
	return 0;
}
