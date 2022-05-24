#include <iostream>;
using namespace std;
class person {
    public:
    int age;
    string name;
    void get_details(){
        cout<<"Enter your age:"<<endl;
        cin>>age;
        cout<<"Enter your name:"<<endl;
        cin>>name;
    }
    void display_details();
    
};
void person::display_details(void)
{
    cout<< "NAME:"<<name<<endl;
    cout<< "AGE:"<<age<<endl;

}

int main()
{
    person p;
    p.get_details();
    p.display_details();
    return 0;
}
