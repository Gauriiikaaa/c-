#include<iostream>
using namespace std;

int main(){
    float far ,cel;
    cout<<"enter celcius";
    cin>>cel;
     far= (cel * 9.0) / 5.0 + 32;
     cout << cel <<"Centigrade is equal to " << far <<"Fahrenheit";
}