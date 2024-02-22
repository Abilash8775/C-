#include<iostream>
#include<string>
using namespace std;

int main(){
    class Employee{
        public:
        int id;
        string name;
    };

    Employee one;
    one.id=101;
    one.name="harry";

    Employee two;
    two.id=101;
    two.name="abilash";

    cout<<"my name is "<<one.name<<" and my id is "<<one.id<<endl;
    cout<<"my name is "<<two.name<<" and my id is "<<two.id<<endl;

};