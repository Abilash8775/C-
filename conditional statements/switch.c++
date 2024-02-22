#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "enter a";
    cin >> a;

    switch (a)
    {
    case 12:
        cout << "you are 12 years old";
        break;
    case 18:
        cout << "you are 18 years old";
        break;
    default:
        cout << "you are default";
        break;
    }
}