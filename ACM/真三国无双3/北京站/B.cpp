#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<string> vec;

void dfs(string s, int i,string ss)
{
	if (i == ss.size())
	{
		vec.push_back(s);
		return ;
	}
	dfs(s, i + 1,ss);
	dfs(s + ss[i], i + 1,ss);
}


int cmp(string a,string b){
	if(a.size()!=b.size()){
		return a.size()>b.size();
	}
	return a<b;
}

int jud(string a,string s){
	int na=a.size(),n=s.size();
	int c;
	for(int i=0;i<n;++i){
		c=0;
		for(int o=0;o<n;++o){
		    if(s[(i+o)%n]==a[c])++c;
		    if(c==na) break;
		}
		if(c==na) return 1;
	}
	return 0;
}


int main(){
	int n;
	string s[10];
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	while(cin>>n){
		string ans="!!!!!!!!!!";
		vec.clear();
		for(int i=0;i<n;++i){
			cin>>s[i];
		}
		int si=s[0].size();
		string t="";
		for (int i = 0; i < s[0].size(); i++)
		{
			t=string (s[0].begin() + i, s[0].end());
			t += string(s[0].begin(), s[0].begin() + i);
			dfs("", 0, t);
		}
		int vs=vec.size();
		sort(vec.begin(),vec.end(),cmp);
		vec.erase(unique(vec.begin(),vec.end()),vec.end());
		vs=vec.size()-1;
		for(int i=0;i<vs;++i){
			int fl=1;
			for(int o=0;o<n;++o){
				if(jud(vec[i],s[o])==0) fl=0;
				if(!fl) break;
			}
			if(fl){
				cout<<vec[i]<<endl;
				ans=vec[i];
				break;
			}
		}
		if(ans=="!!!!!!!!!!") cout<<0<<endl;
	//	cout<<jud(s[0],s[1]);
	//	cout<<"!"<<endl;
	}
	return 0;
}
