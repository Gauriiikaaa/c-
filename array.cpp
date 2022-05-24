#include<iostream>
using namespace std;
int main{
    int a[3][3],i,j;
    cout<<"enter the elements of the array"<<endl;
    for (i=0; i<=2;i++)
    {
        for (j=0;i<=2;i++)
        {
            cin>>a[i][j];

        }
    }
    for (i=0;i<=2;i++)
    {
        for (j=0; j<=2;i++)
        {
            cout<<a[i][j]<<" ";



        }
        cout<<"\n";

    }
    return 0;
}