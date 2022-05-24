#include <iostream>
using namespace std;
int main(){
    
    int i,n;
    cout<<"enter number of elemnts you want in array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:"<<endl;
    for (i=0;i<=n-1;i++)
    
    {
        cin>>arr[i];
        }
        cout<<"your elemnts of array are:";
    for (i=0;i<=n-1;i++)
    {
    cout<<arr[i]<<" ";
       }
    
    return 0;
} 