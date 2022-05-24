//3 input lega sabse kam free milega
#include <iostream>
using namespace std;
int main(){
    int p1=0,p2=0,p3=0,price;
    cout<<"price of gifts:";
    cin>> p1,p2,p3;
    if (p1<=p2 && p1<=p3 ){
        price=p2+p3;
        }
        else if(p2<= p1 && p2<=p3){
        price=p1+p3;
        }
        else{
        price=p1+p2;
        }
        
        cout << price;

}