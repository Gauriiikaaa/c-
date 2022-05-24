#include <iostream>
using namespace std;
class constructor{
    public:
    int a,b;
    constructor(){
            a=5;
            b=10;
    }
};
int main(){
    constructor c;
    cout<<"a:"<<c.a<<endl;
    cout<<"b:"<<c.b<<endl;
    return 0;
}