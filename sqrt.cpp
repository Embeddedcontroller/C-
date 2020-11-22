#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long double a;
    long double b;
    cout << "请输入计算前的数值：";
    cin >> a;
    b = sqrt(a);
    cout << a << "的平方根为:" << b;
    return 0;
    system("pause");
}