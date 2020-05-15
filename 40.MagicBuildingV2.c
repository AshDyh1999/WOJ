//40. MagicBuilding c++
#include<iostream>
#include <stdio.h>
#include<map>
using namespace std;
int main(){
    int t,n,i,num,ans=0;
    map<int,int> count;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        count.clear();
        ans=0;
        for (i = 0; i < n; ++i)
        {
            scanf("%d", &num); 
            count[num]++; 
        }
        map<int,int>::iterator it=count.begin();
        for(it=count.begin();it!=count.end();++it){
            if(it->second>ans)
            ans=it->second;
        }
        printf("%d\n", ans);
    }
    return 0;
} 