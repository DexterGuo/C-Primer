/***********************/
/********main.c********/
/***********************/
#include<iostream>
#include<sstream>
#include<string>
#include "function.h"
using namespace std;

//返回字符串中第一次出现c的位置，并返回c出现的次数
string::size_type find_Char(const string &s, char c, string::size_type &occures);
void print(const int ia[], size_t size)
{
#ifndef NDEBUG
	cerr << __FILE__ << ":array size is " << size << endl;
	for (size_t i = 0; i != size; ++i)
		cout << ia[i] << endl;
#endif
}

void main()
{
	string::size_type val = 0;
//	cout << "please input a number : ";
//	cin >> val;
	string s = "1234haha";
	//string::size_type lens = s.size();
	//cout << s<<" length is :"<<lens;
	auto index = find_Char(s, 'a', val);
//	int fact_result = fact(val);
	cout << "the location is " << index<<endl;
	int j[] = {0,1};
	print(j, end(j) - begin(j));
	cout << "ok!";
	cout << "This is the line number " << __LINE__;
	cout << " of file " << __FILE__ << ".\n";
	cout << "Its compilation began " << __DATE__;
	cout << " at " << __TIME__ << ".\n";
	cout << "The compiler gives a __cplusplus value of ";
	cout << __cplusplus;
}

//返回字符串中第一次出现c的位置，并返回c出现的次数
string::size_type find_Char(const string &s, char c, string::size_type &occures)
{
	auto ret = s.size();
	occures = 0;
	for (decltype(ret) i = 0; i != s.size(); ++i)
	{
		if (s[i] == c)
		{
			if (ret == s.size())
				ret = i;
			++occures;
		}
	}
	return ret;
}

