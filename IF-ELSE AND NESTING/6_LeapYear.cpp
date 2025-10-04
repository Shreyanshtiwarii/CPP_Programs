#include<iostream>
using namespace std;
//WAP to program to find whether the entered year is leap or not
int main()
{
    int year;
    cout<<"Enter a year: ";
    cin>>year;
    if(year%4==0 || year%100!=0 && year%400==0)
    {
        cout<<"The year is a leap year";
    }
    else
    {
        cout<<"The year is not a leap year";
    }
    return 0;
}