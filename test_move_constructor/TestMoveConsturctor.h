#pragma once
class CTestMoveConsturctor
{
private:
	int* data;

public:
	CTestMoveConsturctor();
	CTestMoveConsturctor(const CTestMoveConsturctor& other);
	CTestMoveConsturctor(CTestMoveConsturctor&& other);



	~CTestMoveConsturctor();
};

