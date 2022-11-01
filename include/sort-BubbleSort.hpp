/********************************************************************************
 * @file BubbleSort.hpp
 * @author lxy (2305195328@qq.com)
 * @brief 冒泡排序(英语：Bubble Sort)是一种简单的排序算法.它重复地走访过要排序的数列
 * 一次比较两个元素,如果他们的顺序(如从大到小、首字母从A到Z)错误就把他们交换过来.
 * @version 1.0.0
 * @date 2022-10-27
 ********************************************************************************/
#include <MyArray.hpp>

void MyBubbleSort(MyArray &_array)
{
    //_array.getarray()自动类型转换返回类型为std::vector<int>并不是返回引用!
    std::vector<int> array = _array.getarray();
    int i, j, len = array.size();
    for (i = 0; i < len - 1; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (array.operator[](i) < array.operator[](j))
            {
                std::swap(array[i], array[j]);
            }
        }
    }
    //_array.getarray()返回引用!(_array.getarray()相当于MyArray类中arr的别名)
    _array.getarray() = array;
}
