#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct ju{
	ll p;
	string s;
	ll a,b,c;
};

int cmp(ju a,ju b){
	return a.p<b.p;
}

struct s{
	int a,b,c;
};

int main(){
	ll n;
	ll M=50000000;
	ju a[10009];
	cin>>n;
	int fla=0,flb=0,flc=0;
	ll maxn=0;
	for(int i=0;i<n;++i){
		cin>>a[i].p>>a[i].s;
		a[i].a=a[i].b=a[i].c=0;
		for(int o=0;o<a[i].s.size();++o){
			if(a[i].s[o]=='A') fla=1;
			if(a[i].s[o]=='B') flb=1;
			if(a[i].s[o]=='C') flc=1;
		}
		sort(a[i].s.begin(),a[i].s.end());
	}
	if(!fla||!flb||!flc){
		cout<<-1;
		return 0;
	}
	sort(a,a+n,cmp);
	map<string,ll> m;
	m["A"]=m["B"]=m["C"]=m["AC"]=m["BC"]=m["AB"]=m["ABC"]=50000000;
	for(int i=0;i<n;++i){
		if(a[i].p<m[a[i].s]){
			m[a[i].s]=a[i].p;
		}
	}
/*	for(auto i:m){
		cout<<i.first<<" "<<i.second<<endl;
	}*/
	ll ans=min({m["A"]+m["B"]+m["C"],m["AB"]+m["C"],m["AB"]+m["BC"],m["AB"]+m["AC"],m["BC"]+m["A"],m["BC"]+m["AC"]+m["AC"]+m["B"],m["ABC"]});
	cout<<ans;
	return 0;
}

/*
map<string, int> ma;
vector<pa> ve;
int main() {
	int n;
	cin >> n;
	for (int i = 0, c; i < n; i++) {
		cin >> c;
		string str;
		cin >> str;
		sort(str.begin(), str.end());
		if (ma[str] == 0) ma[str] = c;
		else
			ma[str] = min(ma[str], c);
	}
	for (auto i : ma) {
		int v = 0;
		for (auto & it : i.first) {
			if (it == 'A')v += 4;
			if (it == 'B')v += 2;
			if (it == 'C')v += 1;
		}
		ve.push_back(pa(i.second, v));
		//cout << i.second << " " << v << endl;
	}
	int mincost = INF;
	for (int i = 1; i <= (1 << ve.size()); i++) {
		int ans = 0;
		int cost = 0;
		for (int j = 0; j < ve.size(); j++) {
			if (i & (1 << j)) {
				ans |= ve[j].second;
				cost += ve[j].first;
				//cout << i << endl;
			}
		}
		if (ans >= 7) {
			mincost = min(mincost, cost);
		}
	}
	if (mincost == INF) {
		cout << "-1\n";
	}
	else
		cout << mincost << endl;
}*/
