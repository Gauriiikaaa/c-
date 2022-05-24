#include <iostream>
using namespace std;
class Student
{
public:
    Student()
    {
        cout << "the stream choosen:"
    }
};
class Science : public Student
{
public:
    Science()
    {
        cout << "science";
    }
};
class Arts : public Student
{
public:
    Arts()
    {
        cout << "arts"
    }
};
class Commerce : public Student
{
public:
    Commerce()
    {
        cout << "commerce"
    }
};
int main()
{
}