// test_rvalue_references.cpp : �������̨Ӧ�ó������ڵ㡣
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

