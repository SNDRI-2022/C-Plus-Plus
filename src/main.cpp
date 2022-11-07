#include <MySort.hpp>
void time();
int main(int argc, char *argv[])
{
	try
	{
		MyArray array;
		std::cout << array << std::endl;
		// array.MySortFunc(MyBubbleSort);	   //冒泡排序
		array.MySortFunc(MySelectionSort); //选择排序
		std::cout << array << std::endl;
	}
	catch (char *str)
	{
		std::cout << str << std::endl;
	}
	time();
	return 0;
}

/********************************************************************************
 * @brief 输出时间
 * !调试时使用
 ********************************************************************************/
void time()
{
	char str[50];
	time_t now = time(NULL);
	strftime(str, 50, "%X", localtime(&now));
	std::cout << str << std::endl;
}
