#include "function.h"

//#include <string>
//ʵ�ֽ׳�
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
//�����ַ����е�һ�γ���c��λ�ã�������c���ֵĴ���
int find_char(const string &s, char c, int &occurs);
{
	int ret = s.size();

	return ret;
}

*/