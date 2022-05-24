#include <iostream>
using namespace std;
class X
{
public:
    X()
    {
        char str1[4] = {'A', 'B', 'C', 'D'};
        cout << str1;
    }
};
class Y
{
public:
    Y()
    {
        char str2[4] = {'E', 'F', 'G', 'H'};
        cout << str2;
    }
};
class Z : public Y, public X
{
public:
    Z()
    {

        char str[4] = {'I', 'J', 'K', 'L'};
        cout << str;
    }
};
int main()
{
    Z obj;
    return 0;
}
