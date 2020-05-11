//207. Feli的糖果3
#include <iostream>
#include <stdio.h>
#include<string>
using name space;
string min_cost(string s){
	int len, flag = 0;
	len = s.length();
	for (int i = 0; i < len; ++i)
	{
		if (s[i] > s[len-i])
		{
			
		}
	}

	return s;
}
int main() {
	string s;
	while(cin>>s) {
		cout << min_cost(s) << endl;
	}
	return 0;
