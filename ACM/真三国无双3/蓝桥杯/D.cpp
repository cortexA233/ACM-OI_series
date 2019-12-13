#include<bits/stdc++.h>
using namespace std;

int pw(int x, int y, int p) {
if (!y) {
return 1;
}
int res = pw(x*x,y/2,p);
if (y & 1) {
res = res * x % p;
}
return res;
}
int main() {
int x, y, p;
scanf("%d%d%d", &x, &y, &p);
printf("%d\n", pw(x, y, p));
return 0;
}

