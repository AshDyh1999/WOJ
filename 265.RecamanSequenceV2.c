//265. Recaman's Sequence
//C++98
#include <iostream>
#include <cstdio>
#include <map>
using namespace std;
int a[500001];
map<int ,bool>hash;

int calc(int k){
	int i,t;
    for(i=1; i<k; i++){
        t = a[i-1]-i;
        if(t<=0 || hash[t])
            a[i] = a[i-1]+i;
        else
            a[i] = t;
        hash[a[i]] = true;
    }
}
int main(){
    int p;
    a[0] = 0;
    hash.clear();
    hash[0]=1;
    calc(300000);
    while(cin>>p && p!=-1)
        cout<<a[p]<<endl;
    return 0;
}