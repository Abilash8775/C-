#include <iostream>
using namespace std;

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
int main()
{
    cout << "the sum of function is " << add(10, 40);
}