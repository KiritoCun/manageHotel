#include <stdio.h>
#include <windows.h>
#include<string>
#include <conio.h>
#include<iostream>
using namespace std;
string toLower(string s) {
	string str;
	for (int i = 0; i < s.length(); i++)
	{
		char c = s.at(i);
		str.push_back(tolower(c));
	}
	return str;
}
int main()
{
	char i = 97;
	cout << i;
	system("pause");
	return 0;
}