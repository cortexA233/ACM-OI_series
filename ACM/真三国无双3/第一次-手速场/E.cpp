#include <bits/stdc++.h>
using namespace std;

#define LL long long

LL f[40][2][2][2];
int vis [40][2][2][2];
int len,tot;
int a[40],b[40],k[40];

LL dfs(int x, int af, int bf, int kf) {
    if(vis[x][af][bf][kf]) return f[x][af][bf][kf];
    if (x <=0 ){
        return 1;
    }
    LL ret = 0;
    for (int i = 0; i <= (af ? 1 : a[x]); ++i)
        for (int j = 0; j <= (bf ? 1 : b[x]); ++j) {
            if (kf || (i & j) <= k[x]){
                if(x==1&&(i&j)==k[x]&&!kf) continue;
                int aa=(af || i < a[x]),bb=(bf || j < b[x]),kk=(kf || ((i & j) < k[x]));
                ret+=dfs(x-1,aa,bb,kk);
                tot++;
            }
        }
    f[x][af][bf][kf]=ret;
    vis[x][af][bf][kf]=1;
    return ret;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){ 
        int ai,bi,ki;
        scanf("%d%d%d",&ai,&bi,&ki);
        int tmp=0;
        int la=0,lb=0,lk=0;
        memset(a,0,sizeof(a));
        memset(f,0,sizeof(f));
        memset(vis,0,sizeof(vis));
        memset(b,0,sizeof(b));
        memset(k,0,sizeof(k));
        tmp=ai-1;
        while(tmp){
            a[++la]=tmp&1;
            tmp>>=1;
        }

        tmp=bi-1;
        while(tmp){
            b[++lb]=tmp&1;
            tmp>>=1;
        }

        tmp=ki;
        while(tmp){
            k[++lk]=tmp&1;
            tmp>>=1;
        }
        len=max(la,max(lb,lk));
        tot=0;
        cout<<dfs(len,0,0,0)<<endl;
    }
    return 0;
}

