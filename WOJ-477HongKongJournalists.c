#include<iostream>
using namespace std;

int main()
{

    int n,m,t;
    cin>>n>>m;
    if(n>m)
    {
        // n=n^m;m=n^m;n=n^m;
        t = m;
        m = n;
        n = t;
    }
    if(n<2)
    {
        cout<<-1<<endl;
    }
    else if(n==2)
    {
        if(m%3 != 0 || (m/3)%2 != 1){
            cout<<-1<<endl;
        }else{
            cout<<1<<endl;
        }
    }
    else
    {
        cout<<((m-n)%2)<<endl;
    }

}
