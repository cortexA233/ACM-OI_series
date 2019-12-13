#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;
long long fun(int n)
{
	return n <= 1 ? 1 : n*fun(n - 1);
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a[26] = { 0 };
		int n;
		cin >> n;
		string s,ss;
		cin >> s;
		for (auto c : s)
		{
			a[c - 'a']++;
			if (a[c - 'a'] == 2)
			{
				ss += c ;
				a[c - 'a'] -= 2;
			}
		}
		int tem = 0;
		for (auto c : a)
			if (c) tem++;
/*		cout << "s: " << s << endl;
		cout << "ss: " << ss << endl;
		cout << "tem: " << tem << endl;
		for (int i = 0; i < 26; i++)
			cout << char(i + 'a') << ": " << a[i];*/
		if (tem > 1)
			cout << 0 << endl;
		else
		{
			int tj[26] = { 0 };
			for (auto c : ss)
				tj[c - 'a']++;
			long long ans = 1;
			ans *= fun(ss.end() - ss.begin());
			for (auto c : tj)
				ans /= fun(c);
			cout << ans << endl;
		}
	}
	system("pause");
	return 0;
}
