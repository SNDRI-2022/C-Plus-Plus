#include <iostream>
#include <MySort.h>

int main(int argc, char *argv[])
{

	MyArray array;
	array.show();
	array.MySortFunc(MyBubbleSort);
	array.show();
	std::cout << "end!" << std::endl;
}