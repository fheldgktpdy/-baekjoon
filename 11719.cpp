﻿#include <iostream>
#include <cstring>
#include<string>
#include <vector>

using namespace std;
int main()
{
	string input;

	for (int i = 0; i < 100; i++)
	{
		getline(cin, input);  
		cout << input << endl;
	}

	return 0;
}