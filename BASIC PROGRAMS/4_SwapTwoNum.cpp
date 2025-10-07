#include<iostream>
using namespace std;
//WAP to swap two numbers without using a temporary variable.
int main()
{
    int a,b;
    cout<<"Enter the value of a and b : "<<endl;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping the values are"<<endl<<" a is: "<<a<<" and "<<"b: "<<b;
    return 0;
}