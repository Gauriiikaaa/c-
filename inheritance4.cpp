#include <iostream>
using namespace std;
class University
{
public:
    University()
    {
        cout << "the uinversity is chitkara" << endl;
    }
};
class course
{
public:
    course()
    {
        cout << "the following courses are available: CSE, IT, MECHANICAL,ELECTRICAL,AI" << endl;
    }
};
class student : public University, public course
{
public:
    student()
    {
        cout << "thank you";
    }
};
int main()
{
    student obj3;
    return 0;
}