#include <iostream>
using namespace std;
class alpha
{
    public:
alpha(){
    cout<<"here alpha behaves as a constructor"<<endl;
}
private:
int a;
};
class beta 
{
    public:
    beta(){
        cout<<"here beta is the constructor"<<endl;
    }
};
class gama : public beta, public alpha {
    public:
    gama(){
        cout<<"gama is the constructor here"<<endl;

    }
};
int main(){
    gama g;
    return 0;
}