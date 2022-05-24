//parametrized constructor
#include <iostream>
using namespace std;
class point{
    private:
    int x,y;
    public:
    point (int x1, int y1)
    {
            x=x1;
            y=y1;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }

};
int main(){
    //calling of constructor
    point p1(12,21);
    cout<<"p1.x="<<p1.getx()<<", p1.y = " << p1.gety();
 
    return 0;
}