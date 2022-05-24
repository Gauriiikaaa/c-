#include <iostream>
using namespace std;
//base class
class Parent{
    public:
    int id_p;
};
class Child : public Parent
{
    public:
    int id_c;
};
//main function
int main(){
    Child obj1;
    obj1.id_c=7;
    obj1.id_p=91;
    cout<<"child id is:"<<obj1.id_c<<endl;
    cout<<"parent id is:"<<obj1.id_p<<endl;
    return 0;
}
