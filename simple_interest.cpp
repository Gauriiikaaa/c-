#include <iostream>
using namespace std;
int main(){
    float p,r,t;
    cout<<'enter principle';
    cin>>p;
    cout<<"enter roi";
    cin>>r;
    cout <<"enter time"
    cin>>t;
     float  simple_interes = (p * t* r) / 100;
     cout << "Simple Interest = " << simple_interes ;
 
    return 0;
}