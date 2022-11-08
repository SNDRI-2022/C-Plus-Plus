#include <iostream>
#include <vector>

using namespace std;

void TraversShow(vector<int> &_arr)
{
    for (auto i = _arr.begin(); i != _arr.end(); i++)
    {
        cout << *i << " ";
    }
}

int main()
{
    vector<int> arr{6, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    arr[2] = 888;
    cout << arr[2] << endl;
    // TraversShow(arr); //*遍历输出
    // cout << endl;
    // for (int i = 1; i < arr.size(); i++)
    // {
    //     int temp = arr[i];
    //     for (int j = i; j > 0; j--)
    //         if (arr[j - 1] > temp)
    //             arr[j] = arr[j - 1];
    // }
    // TraversShow(arr); //*遍历输出
    // cout << endl;
    // cout << "test结束" << endl;
    return 0;
}