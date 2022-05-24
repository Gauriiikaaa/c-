//min average value 
//agar 3 bulb hai toh do ki value pata hai usme min batana hai
//company ka claim hai ki x to aa hi jayega
//hme x and n dono input user se lena hai
#include <iostream>
using namespace std;
int main(){
    int N,X,y;
    cout<<"enter number of bulbs on which test was held";
    cin>>N;
    cout<<"Enter avg claim by company";
    cin>>X;
   
    int arr[N-1];
   
    for (int i=0;i<N-1;i++)
    
    {
        cin>>arr[i];
        }

     
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
	
    int sum = 0;
    
    for(int i = 0; i < N; i++){
        sum = sum + arr[i];
    }
    cout<<sum;
   
cout <<"Y="<<X*N/sum<<endl;
  return 0;
}