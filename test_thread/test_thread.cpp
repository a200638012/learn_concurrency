// test_thread.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <thread>

struct func_t{
	int& i;
	func_t(int& i_)
		:i(i_){}
	void operator()(){
		for (unsigned int j = 0; j < 100;++j)
		{
			std::cout << j << std::endl;
		}
	};
};

void print_count();

int _tmain(int argc, _TCHAR* argv[])
{
	int some_local_state = 0;
	func_t my_func(some_local_state);
	//std::thread my_thread(my_func);
	std::thread my_thread(print_count);
	//my_thread.join();
	std::cout << "main_thread" << std::endl;
	getchar();
	return 0;
}

void print_count(){
	std::cout << "hello thread" << std::endl;
	//for (unsigned int j = 0; j < 100; ++j)
	//{
	//	std::cout << "print_count:"<<j << std::endl;
	//}
}