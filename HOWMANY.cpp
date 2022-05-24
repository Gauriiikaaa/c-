#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n<=9){
        cout<<"1 Digit number";
    }
    else if (n>9 && n<=99){
        cout<<"2 Digit";
    }
    else if (n>99 && n>999  ){
        cout<<"3 Digit";
    }
    else{
        cout<<"Greater than 3 digit";
    }
    
} dy