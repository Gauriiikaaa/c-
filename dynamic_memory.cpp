#include<iostream>
using namespace std;

int main (){
    int array[4]= {1,2,3,4}; // size is fixed and can not be changeable at run time.
    cout<<"Static Array."<<endl;
    cout<<"Printing using index."<<endl;
    for(int x=0;x<4;x++){
        cout<<"\t"<<array[x];
    }

    cout<<endl;
    cout<<"Printing using pointer."<<endl;
    int*ptr= array;
    for(int x=0;x<4;x++){
        cout<<"\t"<<*ptr++;
    }
    //delete [] array ;// error
    //  array[6]= {1,2,3,4,5,6}; //Error

    cout<<endl;

    cout<<"\n\nDynamic Array."<<endl;
   int n=4;
   int *array2 = new int [n]; // size is not fixed and changeable at run time.
   array2[0]= 1;
   array2[1]= 2;
   array2[2]= 3;
   array2[3]= 4;
    cout<<endl;
    cout<<"Printing using index."<<endl;
    for(int x=0;x<4;x++){
        cout<<"\t"<<array2[x];
    }

    cout<<endl;
        cout<<"Printing using pointer."<<endl;
    int*ptr2= array2;
    for(int x=0;x<4;x++){
        cout<<"\t"<<*ptr2++;
    }
    cout<<endl<<endl<<endl;
    cout<<"Changing the size of dynamic array at runtime... :)";
    array2 = new int [10]; // Array size is now change to 10 at runtime
   for(int x=0;x<7;x++){
        array2[x]=x+1;
    }
   cout<<endl;
    cout<<"Printing using index."<<endl;
    for(int x=0;x<7;x++){
        cout<<"\t"<<array2[x];
    }
    // free the memory/ heap
    delete [] array2;
    return 0;
}