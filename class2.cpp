#include <iostream>
using namespace std;
class student{
    public:
    int rollno;
    string name;
    void printdetails(){
        cin>>" ENTER YOUR ROLL NUMBER:">>rollno;
        cout<<"your roll no is"<<rollno;
        cin>"ENTER YOUR NAME">>name;
        cout<<"your roll no is:"<<rollno;
    }

};
int main(){
    student r1,n1;
    r1.printdetails();
    n1.printdetails();
    return 0;
}