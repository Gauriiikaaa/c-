#include <iostream>
using namespace std;
class Counter {
    static int count;
    public:
    void printData(){
        cout<<count<<endl;
    }
    void inc(){
        count++;
    }
        };
    int Counter::count=5;
    int main(){
        Counter obj1 , obj2;
        obj1.inc();
        obj2.inc();
        cout<<"object 1 Count : ";
        obj1.printData();
        cout<<"Object2 count:";
        obj2.printData();
        return 0;
    }
