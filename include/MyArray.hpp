/********************************************************************************
 * @file template_sort.hpp
 * @author lxy (2305195328@qq.com)
 * @brief 随机数组,默认长度为10,可自定义长度
 * @version 1.0.0
 * @date 2022-10-27
 ********************************************************************************/
#ifndef _MYARRAY_HPP
#define _MYARRAY_HPP
#include <HeaderFile.hpp>
class MyArray
{
public:
    friend std::ostream &operator<<(std::ostream &output, const MyArray &_arr);
    /********************************************************************************
     * @brief Construct a new MyArray object
     * 构造长度为10的新MyArray对象
     ********************************************************************************/
    MyArray() { init(10); };
    /********************************************************************************
     * @brief Construct a new My Array object
     * 构造长度为len的新MyArray对象
     * @param  len
     ********************************************************************************/
    MyArray(const int len) { init(len); }
    /********************************************************************************
     * @brief 调用自己写的排序函数
     *
     * @param  Func
     ********************************************************************************/
    void MySortFunc(void (&Func)(MyArray &_array)) { Func(*this); }
    /********************************************************************************
     * @brief 用迭代器遍历输出所有值
     *
     ********************************************************************************/
    void show()
    {
        for (auto i = this->arr.begin(); i != this->arr.end(); i++)
            std::cout << *i << " ";
    };
    /********************************************************************************
     * @brief 获取类中的arr(破坏封装)
     *
     * @return std::vector<int>&2
     ********************************************************************************/
    std::vector<int> &getarray() { return arr; }

private:
    std::vector<int> arr;
    void init(const int len);
};

void MyArray::init(const int len)
{
    srand((int)time(NULL));
    for (int i = 0; i < len; i++)
        arr.push_back(rand() % 10);
}

std::ostream &operator<<(std::ostream &output, const MyArray &_arr)
{
    for (auto i = _arr.arr.begin(); i != _arr.arr.end(); i++)
        output << *i << " ";
    return output;
}

#endif
