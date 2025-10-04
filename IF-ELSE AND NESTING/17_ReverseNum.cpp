#include<iostream>
using namespace std;
//WAP to find reverse of entered number
int main()
{
    int n,rev=0,rem;
    cout<<"Enter a number: ";
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
}