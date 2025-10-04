#include<iostream>
using namespace std;
//WAP to find greatest among three numbers using nested if-else
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: "<<endl;
    cin>>a>>b>>c;
    if (a>b)
    {
        if (a>c)
        {
            cout<<"a is greatest";
        }
    }
    else if(b>a)
    {
        if (b>c)
        {
            cout<<"b is greatest";
        }
    else if(c>a)
    {
        if (c>b)
        {
            cout<<"c is greatest";
        }
    }
    return 0;
    }
}