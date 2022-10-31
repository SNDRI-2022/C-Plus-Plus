#include <MySort.h>
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
		// MyArray array;
		// array.show();
		// array.MySortFunc(MyBubbleSort); //冒泡排序
		// // array.MySortFunc();
		// array.show();
		// std::cout << "end!" << strftime(str, 100, "time", ) << std::endl;
		time();
	}
	catch (char *str)
	{
		std::cout << str << std::endl;
	}
}
