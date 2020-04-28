/*
求 1+2+...+n ，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。

 

示例 1：

输入: n = 3
输出: 6
示例 2：

输入: n = 9
输出: 45

*/

#include <iostream>

using namespace std;

class Solution
{
public:
    int sumNums(int n)
    {

        return (n + 1) >> 1;
    }
};

int main(int argc, char **argv)
{
    cout << "Please input a number:" << endl;

    int a = 0;

    cin >> a;

    Solution sol;
    cout << "The result is:" << sol.sumNums(a) << endl;

    return -1;
}