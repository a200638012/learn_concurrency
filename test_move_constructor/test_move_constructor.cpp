// test_move_constructor.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "TestMoveConsturctor.h"


void do_stuff(CTestMoveConsturctor&& x_);

int _tmain(int argc, _TCHAR* argv[])
{
	CTestMoveConsturctor temp1;
	CTestMoveConsturctor t2(temp1);
	do_stuff(CTestMoveConsturctor());

	CTestMoveConsturctor t3(CTestMoveConsturctor());
	return 0;
}

void do_stuff(CTestMoveConsturctor&& x_){}