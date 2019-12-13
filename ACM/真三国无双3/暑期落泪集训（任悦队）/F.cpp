#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<string>
using namespace std;

char s[400009];

void cal_next(char *str, int *next, int len)
{
    next[0] = -1;//next[0]初始化为-1，-1表示不存在相同的最大前缀和最大后缀
    int k = -1;//k初始化为-1
    for (int q = 1; q <= len-1; q++)
    {
        while (k > -1 && str[k + 1] != str[q])//如果下一个不同，那么k就变成next[k]，注意next[k]是小于k的，无论k取任何值。
        {
            k = next[k];//往前回溯
        }
        if (str[k + 1] == str[q])//如果相同，k++
        {
            k = k + 1;
        }
        next[q] = k;//这个是把算的k的值（就是相同的最大前缀和最大后缀长）赋给next[q]
    }
}

int main(){
	while(scanf("%s",s)!=EOF){
		int ne[400009];
	    int n=strlen(s),fl;
		cal_next(s,ne,n);
		for(int i=0;i<n;++i){
			if(ne[i]>0){
				cout<<i<<" ";
			}
		}cout<<endl;
	}
	return 0;
}
