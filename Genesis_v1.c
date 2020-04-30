#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
    string s;
    bool f = false;
    int cnt = 0;
    while(cin >> s) {
        if(s[0] == '1' || s[0] == '2') {
            if(f) cout << cnt << endl;
            cout << s << " ";
            cnt = 0;
            f = true;
        }
        else if((s[0] >= 'a' && s[0] <= 'z') || (s[0] >= 'A' && s[0] <= 'Z')) cnt++;
    }
    cout << cnt << endl;
    return 0;
}