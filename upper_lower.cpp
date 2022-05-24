// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   char ch; 
cout<<"enter a character:"<<endl;
cin>>ch;
if(ch>=65 and ch<=90){
    cout<<"character is uppercase";
}
else if(ch>=97 and ch<=122){
    cout<<"character is lowercase";
}
else{
    cout<<"entered value is not a character";
}
    return 0;
}