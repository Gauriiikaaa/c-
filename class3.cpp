#include <iostream>
using namespace std;
class student{
    public:
    int rollno;
    string name;
    
};
int main(){
    student r1,n1;
    r1.rollno=2110992146;
    n1.name="Gaurika Sawney";
    cout<<"your roll number is:"<<r1.rollno<<endl;
    cout<<"your name is:"<<n1.name<<endl;

    return 0;
}