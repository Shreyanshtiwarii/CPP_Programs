#include<iostream>
using namespace std;
//WAP to add digits of a five digit number
int main()
{
    int a,sum=0,rem;
    cout<<"Enter a number: ";
    cin>>a;
    while (a!=0)
    {
        rem=a%10;
        sum=sum+rem;
        a=a/10;
    }
    cout<<"the sum of digits is: "<<sum;
    return 0;
}