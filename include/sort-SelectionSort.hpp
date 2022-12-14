/********************************************************************************
 * @file SelectionSort.hpp
 * @author lxy (2305195328@qq.com)
 * @brief 选择排序(Selection sort)是一种简单直观的排序算法。它的工作原理如下。
 * 首先在未排序序列中找到最小(大)元素,存放到排序序列的起始位置,然后,
 * 再从剩余未排序元素中继续寻找最小(大)元素，然后放到已排序序列的末尾.
 * 以此类推,直到所有元素均排序完毕.
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
        int min = i;
        for (int j = i + 1; j < len; j++) //找到最小的数
            if (array[min] > array[j])
                min = j;
        if (min != i)
            std::swap(array[i], array[min]);
    }
    _array.getarray() = array;
}