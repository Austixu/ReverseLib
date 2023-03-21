#pragma once
#ifdef _MSC_VER
#include <string>
using namespace std;
int reverse(int a)
{
	char b[101];
	strcpy_s(b, to_string(a).c_str());
	string c = "";
	for (int i = 100; i >= 0; i--)
	{
		if (b[i] == '1' || b[i] == '2' || b[i] == '3' || b[i] == '4' || b[i] == '5' || b[i] == '6' || b[i] == '7' || b[i] == '8' || b[i] == '9' || b[i] == '0')
		{
			c += b[i];
		}
	}
	return atoi(c.c_str());
}
string reverse(string a)
{
	char b[11];
	strcpy_s(b, a.c_str());
	string c = "";
	for (int i = 100; i >= 0; i--)
	{
		if (b[i] == '1' || b[i] == '2' || b[i] == '3' || b[i] == '4' || b[i] == '5' || b[i] == '6' || b[i] == '7' || b[i] == '8' || b[i] == '9' || b[i] == '0')
		{
			c += b[i];
		}
	}
	return c;
}
__int64 reverse(__int64 a)
{
	char b[101];
	strcpy_s(b, to_string(a).c_str());
	string c = "";
	for (__int64 i = 100; i >= 0; i--)
	{
		if (b[i] == '1' || b[i] == '2' || b[i] == '3' || b[i] == '4' || b[i] == '5' || b[i] == '6' || b[i] == '7' || b[i] == '8' || b[i] == '9' || b[i] == '0')
		{
			c += b[i];
		}
	}
	return _atoi64(c.c_str());
}
#elif
#include <string>
using namespace std;
int reverse(int a)
{
	char b[101];
	strcpy(b, to_string(a).c_str());
	string c = "";
	for (int i = 100; i >= 0; i--)
	{
		if (b[i] == '1' || b[i] == '2' || b[i] == '3' || b[i] == '4' || b[i] == '5' || b[i] == '6' || b[i] == '7' || b[i] == '8' || b[i] == '9' || b[i] == '0')
		{
			c += b[i];
		}
	}
	return atoi(c.c_str());
}
string reverse(string a)
{
	char b[11];
	strcpy(b, a.c_str());
	string c = "";
	for (int i = 100; i >= 0; i--)
	{
		if (b[i] == '1' || b[i] == '2' || b[i] == '3' || b[i] == '4' || b[i] == '5' || b[i] == '6' || b[i] == '7' || b[i] == '8' || b[i] == '9' || b[i] == '0')
		{
			c += b[i];
		}
	}
	return c;
}
__int64 reverse(__int64 a)
{
	char b[101];
	strcpy_(b, to_string(a).c_str());
	string c = "";
	for (__int64 i = 100; i >= 0; i--)
	{
		if (b[i] == '1' || b[i] == '2' || b[i] == '3' || b[i] == '4' || b[i] == '5' || b[i] == '6' || b[i] == '7' || b[i] == '8' || b[i] == '9' || b[i] == '0')
		{
			c += b[i];
		}
	}
	return _atoi64(c.c_str());
}
#endif