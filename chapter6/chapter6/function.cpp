#include "function.h"

//#include <string>
//实现阶乘
int fact(int val)
{
	int ret = 1;
	if (val == 1 || val == 0)
		;
	else
	{
		while (val > 1)
			ret *= val--;
	}
	return ret;
}

/*
//返回字符串中第一次出现c的位置，并返回c出现的次数
int find_char(const string &s, char c, int &occurs);
{
	int ret = s.size();

	return ret;
}

*/