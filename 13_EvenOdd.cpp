#include<iostream>
using namespace std;
//WAP to check whether the entered number is even or odd.
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num%2==0)
        cout<<num<<" is even number.";
    else
        cout<<num<<" is odd number.";
    return 0;
}