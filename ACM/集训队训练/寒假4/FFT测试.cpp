#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <complex>
#include <iostream>
#define space putchar(' ')
#define enter putchar('\n')
using namespace std;
typedef long long ll;
template <class T>
void read(T &x){
    char c;
    bool op = 0;
    while(c = getchar(), c < '0' || c > '9')
    if(c == '-') op = 1;
        x = c - '0';
    while(c = getchar(), c >= '0' && c <= '9')
        x = x * 10 + c - '0';
    if(op) x = -x;
}
template <class T>
void write(T x){
    if(x < 0) putchar('-'), x = -x;
    if(x >= 10) write(x / 10);
    putchar('0' + x % 10);
}
const int N = 1000005;
const double PI = acos(-1);
typedef complex <double> cp;
char sa[N], sb[N];
int n = 1, lena, lenb, res[N];
cp a[N], b[N], omg[N], inv[N];
void init(){
    for(int i = 0; i < n; i++){
        omg[i] = cp(cos(2 * PI * i / n), sin(2 * PI * i / n));
        inv[i] = conj(omg[i]);
    }
}
void fft(cp *a, cp *omg){
    int lim = 0;
    while((1 << lim) < n) lim++;
    for(int i = 0; i < n; i++){
        int t = 0;
        for(int j = 0; j < lim; j++)
            if((i >> j) & 1) t |= (1 << (lim - j - 1));
        if(i < t) swap(a[i], a[t]); // i < t ������ʹ��ÿ�Ե�ֻ������һ�Σ����򽻻������൱��û������
    }
    for(int l = 2; l <= n; l *= 2){
        int m = l / 2;
        for(cp *p = a; p != a + n; p += l)
	        for(int i = 0; i < m; i++){
	            cp t = omg[n / l * i] * p[i + m];
	            p[i + m] = p[i] - t;
	            p[i] += t;
	        }
    }
}
int main(){
    scanf("%s%s", sa, sb);
    lena = strlen(sa), lenb = strlen(sb);
    while(n < lena + lenb) n *= 2;
    for(int i = 0; i < lena; i++)
        a[i].real(sa[lena - 1 - i] - '0');
    for(int i = 0; i < lenb; i++)
        b[i].real(sb[lenb - 1 - i] - '0');
    init();
    cout<<n<<endl;
    for(int i=0;i<n;++i) cout<<a[i]; cout<<endl;
    for(int i=0;i<n;++i) cout<<b[i]; cout<<endl;
    
    fft(a, omg);
    fft(b, omg);
    for(int i = 0; i < n; i++)
        a[i] *= b[i];
    fft(a, inv);
    for(int i=0;i<n;++i) cout<<a[i]; cout<<endl;
    for(int i = 0; i < n; i++){
        res[i] += floor(a[i].real() / n + 0.5);
        res[i + 1] += res[i] / 10;
        res[i] %= 10;
    }
    for(int i=n-1;i>=0;--i){
		cout<<res[i];
	}cout<<endl;
    
    for(int i = res[lena + lenb - 1] ? lena + lenb - 1: lena + lenb - 2; i >= 0; i--)
        putchar('0' + res[i]);
    enter;
    return 0;
}
