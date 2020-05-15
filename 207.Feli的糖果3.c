//207. Feli的糖果3
#include <iostream>
#include<string>
using namespace std;
string min_cost(string s){
	string a = "", b = "";
	int len, index;
	len = s.length();
	if (len % 2 == 0)
	{
		index = len/2;
		for (int i = 0; i < index; ++i)
		{
			a += s[index-1-i];
			b += s[index+i];
		}
		if (a > b)	
		{
			for(int i=0; i<index; i++) s[index+i] = a[i];
		}else if (a == b)
		{ }
		else{
			index --;
			while(s[index] == '9' && index >= 0){
				s[index] = '0';
				index --;
			}
			if (index >= 0)
			{
				s[index]++;
				// for (int i=len/2; i<len; i++) s[i] = s[len-1-i];
				for(int i=0; i<len/2; i++) s[len-1-i] = s[i]; 
			}
		}
	}else{
		index = (len-1)/2;
		for (int i = 0; i < index; ++i)
		{
			a += s[index-1-i];
			b += s[index+1+i];
		}
		if (a > b)	
		{
			for(int i=0; i<index; i++) s[index+1+i] = a[i];
		}else if (a == b)
		{ }
		else{
			while(s[index] == '9' && index >= 0){
				s[index] = '0';
				index --;
			}
			if (index >= 0)
			{
				s[index]++;
				// for (int i=(len-1)/2; i<len; i++) s[i] = s[len-i-1];
				for(int i=0; i<(len-1)/2; i++) s[len-1-i] = s[i]; 
			}
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
}
