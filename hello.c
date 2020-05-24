#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
typedef long long ll;
const int maxn = 1e4+10;
int n,m;
int cnt[maxn];//cnt[i]记录所给数据中，含有因数i的个数有几个
int num[maxn];//num[i]记录所给数据中，因数i中含有几个不同素因子
ll c[maxn];//c[i]表示组合数C(i,4)
int prime[maxn];
void init(){
    for(ll i = 4; i < maxn; i++){
        c[i] = i * (i - 1) * (i - 2) * (i - 3) / 24;
    }
}
void divide(int n){
    int tot = 0;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            prime[tot++] = i;
            while(n % i == 0) n /= i;
        }
    }
    if(n > 1) prime[tot++] = n;//分解质因子
    for(int i = 1; i < (1<<tot); i++){//枚举质因子组合情况得到所有可能因子
        int tmp = 1;
        int sum = 0;
        for(int j = 0; j < tot; j++){
            if(i & (1 << j)){
                tmp *= prime[j];
                sum++;
            }
        }
        cnt[tmp]++;//说明数n包含tmp这种因子，所以个数+1
        num[tmp] = sum;//tmp这种因子内含有sum个不同质因子
    }
}
int main(){
    init();
    memset(num,0,sizeof(num));
    while(scanf("%d",&n) != EOF){
        memset(cnt,0,sizeof(cnt));
        for(int i = 0; i < n; i++){
            scanf("%d",&m);
            divide(m);//质因子分解统计相关数据
        }
        ll ans = 0;
        for(int i = 2; i < maxn; i++){
            if(cnt[i] >= 4){
                if(num[i] & 1) ans += c[cnt[i]];//因子i中含有的质因子数为奇数加
                else ans -= c[cnt[i]];//否则减
            }
        }
        printf("%lld\n",c[n]-ans);
    }
    return 0;
}
