#include "stdafx.h"
#include "TestMoveConsturctor.h"
#include <algorithm>


CTestMoveConsturctor::CTestMoveConsturctor()
	:data(new int[100000])
{
}

CTestMoveConsturctor::CTestMoveConsturctor(const CTestMoveConsturctor& other)
	: data(new int[100000])
{
	memcpy(data, other.data, 100000);
	//std::copy(other.data, other.data + 100000, data);
}

CTestMoveConsturctor::CTestMoveConsturctor(CTestMoveConsturctor&& other)
	: data(other.data)
{
	other.data = nullptr;
}

CTestMoveConsturctor::~CTestMoveConsturctor()
{
	delete[] data;
}
