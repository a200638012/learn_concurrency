// test_rvalue_references.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int var = 42;
	int& ref = var;
	ref = 99;
	int&& k = 100;
	return 0;
}

