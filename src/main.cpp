#include <iostream>
#include <MySort.h>
void test()
{
	auto labfunc = [](int a, int b) -> int
	{ return a + b; };
	labfunc();
}
int main(int argc, char *argv[])
{
	//测试中
	test();
	// MyArray array;
	// array.show();
	// array.MySortFunc(MyBubbleSort); //冒泡排序
	// // array.MySortFunc();
	// array.show();

	// // std::cout << "end!" << strftime(str, 100, "time", ) << std::endl;
}
