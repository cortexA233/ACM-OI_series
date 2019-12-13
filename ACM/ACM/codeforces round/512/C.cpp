#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios::sync_with_stdio(false);
	int n,s=0;
	string str;
	cin>>n>>str;
	int a[1000];
	for(int i=0;i<n;++i){
		a[i]=str[i]-'0';
		s+=a[i];
	//	cout<<a[i]<<" ";
	}
//	cout<<" "<<s<<"!"<<endl;
	int fl=0,sum=0;
	for(int i=2;i<=n;++i){
		if((s%i)!=0) continue;
        sum=0;
        int seg=0;
		for(int o=0;o<n;++o){
			sum+=a[o];
			if(sum==s/i){
		//		cout<<sum<<"!"<<endl;
				sum=0;
				
				++seg;
			}
		}
	//	cout<<seg<<"!"<<endl;
		if(seg==i){
			fl=1;break;
		}
	}
	if(fl) cout<<"YES";
	else cout<<"NO";
	return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;
const int N = 105;
int a[N];
int main()
{
	int n;
	scanf("%d", &n);
	int sum = 0;
	char s[105];
	scanf("%s", s + 1);
	for (int i = 1; i <= n; i++)
	{
		a[i] = s[i] - '0';
		sum += a[i];
	}
	bool find = 0;
	for (int j = 1; j < sum; j++)
	{
		if (sum % j == 0)
		{
			bool ok = 1;
			int cur = 0;
			int l = 1;
			while (l <= n)
			{
				if (cur < j)
					cur += a[l];
				else if (cur == j)
				{
					cur = a[l];
				}
				else
				{
					ok = 0;
					break;
				}
				l++;
			}
			if (cur != j)
				ok = 0;
			if (ok)
			{
				find = 1;
				break;
			}
		}
	}
	if (find)
	{
		puts("YES");
	}
	else
	{
		puts("NO");
	}
	return 0;
}*/
