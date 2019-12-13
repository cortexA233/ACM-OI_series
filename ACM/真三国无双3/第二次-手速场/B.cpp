#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;

typedef pair<string, int> P;

bool cmp( P l,   P r)
{
	if (l.second == r.second) return l.first < r.first;
	return l.second < r.second;
}

int main()
{
	map <string, int > cot;
	int n;
	cin >> n;
	while (n--)
	{
		string tem;
		cin >> tem;
		cot[tem]++;
	}
	vector <P> coot(cot.begin(), cot.end());
	sort(coot.begin(), coot.end(), cmp);
/*	for (auto i=coot.begin();i!=coot.end();i++)
		cout << i.first << endl;*/
	for (auto i : coot){
		cout << i.first << endl;
	}
		
	return 0;
}
