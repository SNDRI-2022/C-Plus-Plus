#include <MySort.hpp>
void time()
{
	char str[50];
	time_t now = time(NULL);
	strftime(str, 50, "%X", localtime(&now));
	std::cout << str << std::endl;
}
int main(int argc, char *argv[])
{
	try
	{
		MyArray array;
		array.show();
		// array.MySortFunc(MyBubbleSort);	   //冒泡排序
		array.MySortFunc(MySelectionSort); //选择排序
		array.show();
	}
	catch (char *str)
	{
		std::cout << str << std::endl;
	}
	return 0;
}
