//399. Sky Code
#include <stdio.h>
#include <string.h>
#include <iostream>
#define MAX 100001
using namespace std;

//factor_num[i]记录含有因数i的数有几个
int factor_num[MAX];
//count[i]记录因数i中含有几个不同的素因子
int count[MAX];
//用于统计质因数的种类，每一个数组单元存一个质因数，方便后面更新count表和factor_num表
int prime[10];
//组合数存表，用于将C(N, 4)结果保存
long long c[MAX];
//初始化上述组合数表
void init(){
    for(long long i = 4; i < MAX; i++){
        c[i] = i * (i - 1) * (i - 2) * (i - 3) / 24;
    }
}

//质因子分解函数，传入整数，进行质因子分解并将统计结果写入数组
void factorization(int n)
{
	int index = 0;
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            prime[index] = i;
            index++;
            while(n % i == 0)
            {
            	n /= i;
            } 
        }
    }

//如果最后的余数大于1，则为最后一个素因子种类，记录到prime数组
    if(n > 1)
    {
    	prime[index++] = n;
    }
//根据素因子种类数枚举质因子组合情况得到所有可能因子，如class等于2则有01，10，11，3种组合方式
    for(int i = 1; i < (1<<index); i++)
    {
    	//tmp用于记录素因子组合成的各种因子
        int tmp = 1;
        //sum用于统计因子tmp内含有几种素因子
        int sum = 0;
        for(int j = 0; j < index; j++)
        {
            if(i & (1 << j))
            {
                tmp *= prime[j];
                sum++;
            }
        }
        //说明数n包含tmp这种因子，个数+1
        factor_num[tmp]++;
        //tmp这种因子内含有sum个不同质因子
        count[tmp] = sum;
    }
}

int main(int argc, char const *argv[])
{
	//填组合数表
	init();
	// cout << c[10000] <<endl;
	memset(count, 0, sizeof(count));
	int n,m;
	while(cin >> n)
	{
		memset(factor_num, 0, sizeof(factor_num));
		for (int i = 0; i < n; ++i)
		{
			//读取用户的输入
			cin >> m;
			//质因子分解，并进行相关统计，更新count数组和factor_num数组
 			factorization(m);
		}
		long long res = 0;
		//容斥原理核心算法
		for (int i = 2; i < MAX; ++i)
		{
			if (factor_num[i] >= 4)
			{
				if (count[i] % 2 == 1)
				{
					//奇数加
					res += c[factor_num[i]];
				}else{
				    //偶数减
					res -= c[factor_num[i]];
				}
			}
		}
		cout << c[n]- res << endl;
	}	
	return 0;
}