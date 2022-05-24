#include <iostream>
using namespace std;
class alpha
{
private:
    int m;

public:
    int a;
};
class beta : public alpha
{
private:
    int n;

public:
    int b;
};
class gama : public alpha, public beta
{
public:
    int c;
};
int main()
{
    class gama obj;

    /*obj.beta::a=11;
    obj.gama::a=111;*/
    obj.b = 9;
    obj.c = 10;
    cout << "a from beta" << obj.beta::a << endl;
    cout << "a from gama " << obj.gama::a << endl;
    cout << obj.b << endl;
    cout << obj.c << endl;
    return 0;
}