//138. Gauss Fibonacci
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

long long mod;
struct Matrix
{
    long long ma[2][2];
};
Matrix res,A,B;

Matrix mult(Matrix A,Matrix B);
Matrix power(Matrix A,long long n);
Matrix add(Matrix a,Matrix b);
Matrix sum(Matrix A,long long k);
void init();

int main()
{
    long long k,b,n;
    while(cin >> k >> b >> n >> mod)
    {
        init();
        B=A;
        A=power(A,b);
        B=power(B,k);
        B=add(res,sum(B,n-1));
        A=mult(A,B);
        cout << A.ma[0][1] << endl;
    }
    return 0;
}
void init()
{
    A.ma[0][0]=1;
    A.ma[0][1]=1;
    A.ma[1][0]=1;
    A.ma[1][1]=0;
    res.ma[0][0]=1;
    res.ma[1][1]=1;
    res.ma[0][1]=0;
    res.ma[1][0]=0;
}
//矩阵乘
Matrix mult(Matrix A,Matrix B)
{
    Matrix C;
    memset(C.ma,0,sizeof(C.ma));
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++)
        {
            for(int k=0; k<2; k++){
                C.ma[i][j] = (C.ma[i][j]%mod + (A.ma[i][k]*B.ma[k][j])%mod)%mod;
            }   
        }
    }
    return C;
}

Matrix power(Matrix A,long long n)
{
    Matrix B;
    B.ma[0][0]=B.ma[1][1]=1;
    B.ma[0][1]=B.ma[1][0]=0;
    while(n)
    {
        if(n&1){
            B=mult(B,A);
        } 
        A=mult(A,A);
        n>>=1;
    }
    return B;
}

//矩阵加
Matrix add(Matrix a,Matrix b){
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            a.ma[i][j] = (a.ma[i][j]%mod + b.ma[i][j]%mod)%mod;
        }
    }
    return a;
}

//用二分法求矩阵和,递归实现
Matrix sum(Matrix A,long long k)
{
    Matrix ans;
    if(k==1){
        ans =  A;
    }
    else if(k&1){
        ans = add(sum(A,k-1),power(A,k));
    }
    else{
        ans = mult(sum(A,k>>1),add(power(A,k>>1),res));
    }
    return ans;
}
