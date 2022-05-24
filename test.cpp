#include <iostream>
using namespace std;
int main(){
    int no,mrp,rem;
    cout<<"enter the number of gifts u want to buy";
    cin>>no;
    //given mrp of one gift to be 1 rps
    if (no<=4){
        mrp=no;
    }
     else if(no%5==0){
        mrp=4*no;
    }
     else if(no>5) {
     rem=no/5;
    mrp=no-rem;
    }
  cout<<"the price of gift is"<<mrp;
  return 0;
}