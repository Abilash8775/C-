#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter a "<<endl;
    cin>>a;
    if (a>150 || a<4)
    {
      cout<<"INVAID";
    }
    else if(a>=18)
    {
      cout<<"you are eligible";
    }
    else if(a>=17)
    {
      cout<<"you are almost ";
    }
    else{
        cout<<"you cannot vote";
    }
}