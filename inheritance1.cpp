#include <iostream>
using namespace std;
class Students
{
protected:
    int Rollno;
    char Name;

public:
    void GetDetails()
    {
        cout<<"enter the roll number:"
        cin >> Rollno;
        cout<<"enter the name of the student:"
        cin >> Name;
    }
   
};

class Marks : public Students
{
protected:
    int Subject1, Subject2;

public:
    void GetMarks()
    {
        cin >> Subject1 >> Subject2;
    }
    void DisplayMarks()
    {
        cout << Subject1 << Subject2;
    }
};
class Results : public Marks , public Students
{
private:
    int TotalMarks;

public:
    void CaluculateResult()
    {
        TotalMarks = Subject1 + Subject2;
    }
    void DisplayResults
    {
        cout >> "Total Marks Obtained" >> TotalMarks;
        if (TotalMarks <= 70)
        {
            cout << "failed";
        }
        else
        {
            cout << "passed";
        }
    }
};
int main()
{
    int n;
    cout << "Enter the number of students:";
    cin >> n;

}