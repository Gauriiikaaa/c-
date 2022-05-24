/*write a program to check whether a character is a vowel or constant*/
#include <iostream>
using namespace std;
int main()
{
    char c;
cout<<"enter a character:"<<endl;
cin>>c;
if ( c=='a' || c=='e' || c=='i' || c=='o' ||c=='u')
{
    cout<<"entered variable is a vowel"<<endl;
}
else if ( c=='A' || c=='E' || c=='I' || c=='O' ||c=='U')
{
cout<<"entered variable is a vowel"<<endl;
}
else
{
    cout<<"entered value is a consonant"<<endl;
}
}
// code by gaurika