#include <iostream>
using namespace std;
class A
{
    public:

    int numA;
    friend class B;
};
class B
{
    public:
    int numB;
    
    void add(int x,int y)
    {
        int s;
        s=x+y;
        cout<<"Sum is : "<<s<<endl;
    }

};
int main(){
    A obj;
    B obje;
    obje.add(12,15);
    return 0;
}
//i want to change the code i have a better solution 
