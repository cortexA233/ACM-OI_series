#include<bits/stdc++.h>
using namespace std;

#include <stdio.h>
int main() {
int n, ans = 0;
scanf("%d", &n);
while (n) {
ans += (n--)%5?0:1/*��������д��Ҫ�Ĵ���*/;
}
printf("%d\n", ans);
return 0;
}

