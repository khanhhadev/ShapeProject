#include "Shape.h"

int Shape::toInt(const string& s)
{
	int Result = 0;
	int n = s.length();
	int con = (s[0] == '-') ? -1 : 1;
	int i = (con == -1) ? 1 : 0;
	for (; i < n; i++)
	{
		Result *= pow(10, i - ((con == -1)?1:0));
		Result += s[i] - '0';
	}
	Result *= con;
	return Result;
}
