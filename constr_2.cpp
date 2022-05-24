#include <iostream>
using namespace std;
class B;
class A{
    private:
    int numA;
    friend class B;
    public:
    classA() : num(12){

    }
};
class classB{
     public:
    int numB;
    classB() : num(15) {

    }

    int add(){
    classA objectA;
    return objectA.numA+numB;
    }
};
int main(){
    classB objectB;
    cout<<"sum:"<<objectB.add();
    return 0;
}