#include <iostream>
using namespace std;
class name{
    public:
    string fullname;
    void printname(){
        cout<<"my name is :"<< fullname;
          }   
    };
int main(){
    name obj1;
    obj1.fullname="Gaurika";
    obj1.printname();
    return 0;
    }
