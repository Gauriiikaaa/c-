#include <iostream>
using namespace std;
int main(){
    int a,b;
    int *ptr1,*ptr2;
    int sum, sub;
    cin>>a>>b;
    
    ptr1=&a;
    ptr2=&b;
    sum=*ptr1+*ptr2;
    sub=abs(*ptr1-*ptr2);
    cout<<sum<<sub;
    return 0;
}