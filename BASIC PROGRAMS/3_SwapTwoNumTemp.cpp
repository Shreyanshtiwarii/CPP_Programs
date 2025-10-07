#include<iostream>
using namespace std;
//WAP to swap two numbers using a temporary variable.
int main()
{
    int a,b,temp;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"Before swapping"<<endl<<"a = "<<a<<endl<<"b = "<<b<<endl;
    temp=b;
    b=a;
    a=temp;
    cout<<"After swapping"<<endl<<"a = "<<a<<endl<<"b = "<<b<<endl;
    return 0;
}