/*
Suppose you have a Piggie Bank with an initial amount of $50 and you have to add some more amount to it. Create a class 'AddAmount' with a data member named 'amount' with an initial value of $50. Now make two constructors of this class as follows:
1 - without any parameter - no amount will be added to the Piggie Bank
2 - having a parameter which is the amount that will be added to the Piggie Bank
Create an object of the 'AddAmount' class and display the final amount in the Piggie Bank.*/
#include <iostream>
using namespace std;
class piggie_bank{
    public:
    int amount;
    piggie_bank(){
        amount=50;
    }
    piggie_bank(int a){
        amount=50;
        amount = a+amount;
    }
    void print_amt()
    {
        cout<<"your amount is:"<< amount <<endl;
    }
};
int main(){
    piggie_bank a1;
    piggie_bank a2(15);
    a1.print_amt();
    a2.print_amt();
    return 0;
}