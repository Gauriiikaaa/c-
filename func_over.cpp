#include <iostream>
#include <math.h>
using namespace std;
class Shape{
    public:
    void func(int l, int h)
    {
        cout<<"area of rectangle is"<<l*h<<endl;
    }
    void func(int r)
    {
        cout<<"area of circle is:"<<3.14*r*r<<endl;
    }
    void func(double x, double y)
    {
        cout<<"area of right angled triangle:"<<0.5*x*y<<endl;
    }
    
};
int main(){
    Shape object1;
    object1.func(4,5);
    object1.func(5);
    object1.func(2.5,3.5);
}
