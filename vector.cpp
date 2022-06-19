#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    if (a.empty())
        cout << "Yes empty" << endl;
    else
        cout << "Not empty";

    vector<int>b(3);
    b[0] = 1;
    b[1] = 2;
    b[2] = 3;
    for (int i = 0; i < 3; i++)
        cout << b[i] << " ";
    cout << "\n";
    b.push_back(5);
    for (int i = 0; i < b.size(); i++)
        cout << b[i] << " ";
    cout << "\n";
}
