#include <iostream>
using namespace std;
int main(int b , int p){
    int i,power=1;
    cout<<"Enter the base of a number";
    cin>>b;
    cout<<"Enter the power of a number ";
    cin>>p;
if (p==0)
return 1;
    for(i=1;i<=p;i++){
        power=power*b;
        //cout << "the result is:"<<power;
    }
 cout << "the result is:"<<power;
}

