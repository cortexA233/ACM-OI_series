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
    next[0] = -1;//next[0]��ʼ��Ϊ-1��-1��ʾ��������ͬ�����ǰ׺������׺
    int k = -1;//k��ʼ��Ϊ-1
    for (int q = 1; q <= len-1; q++)
    {
        while (k > -1 && str[k + 1] != str[q])//�����һ����ͬ����ôk�ͱ��next[k]��ע��next[k]��С��k�ģ�����kȡ�κ�ֵ��
        {
            k = next[k];//��ǰ����
        }
        if (str[k + 1] == str[q])//�����ͬ��k++
        {
            k = k + 1;
        }
        next[q] = k;//����ǰ����k��ֵ��������ͬ�����ǰ׺������׺��������next[q]
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
