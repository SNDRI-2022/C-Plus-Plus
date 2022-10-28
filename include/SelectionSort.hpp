/********************************************************************************
 * @file SelectionSort.hpp
 * @author lxy (2305195328@qq.com)
 * @brief 选择排序C++实现
 * @version 1.0.0
 * @date 2022-10-28
 ********************************************************************************/
#include <MyArray.hpp>

void MySelectionSort(MyArray &_array)
{
    std::vector<int> array = _array.getarray();
    int len = array.size();
    for (int i = 0; i < len - 1; i++)
    {
        int min = array[i];
        for (int j = i + 1; j < len; j++)
        {
            if (min > array[j])
            {
                std::swap(min, array[j]);
            }
        }
    }
}