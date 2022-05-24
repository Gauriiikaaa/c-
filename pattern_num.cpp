#include<iostream>
using namespace std;


int main(){

    int num=1 ,i,j;
    cin>>num;
    
    for (int i=0;i<num;i++)
    {
        for (int j=0; j<=i;j++)
        {
            cout<<num<<" ";
            num=num+1;
            cout<<endl;
        }
        
    }
    return 0;
}

