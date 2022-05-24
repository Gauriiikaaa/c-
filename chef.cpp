#include <iostream>
using namespace std;
int main(){
    float X1,X2,X3,V1,V2;
    cin>>X1>>X2>>X3>>V1>>V2;
    float t1,t2;
    t1=((X3-X1)/V1);//Keya
    t2=((X2-X1)/V2);//CHEF
    if (t1>t2){
        cout<<"kefa"<<endl;
    }
    else if(t2>t1){
        cout<<"chef"<<endl;

    }
    else{
        cout<<"tie between them"<<endl;
    }
}
