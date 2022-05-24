#include <iostream>
using namespace std;
class student{
    int rollno;
    int age;

    // creating object statically
    student s1;
    student s2;
    student s3,s4,s5;
    //creating object dynamically
    student *s6= new student;
    student *s7= new student;

}
int main(){
    s1.age()=24;
    s1.rollno=1;
    (*s6).age =24;
    (*s6).rollno=6;
    s7-> age=23;
    s7-> rollno =7;
    cout>>s1>>s2>>s6>>s7;
}