#include<iostream>
using namespace std;
// WAP to find greatest among three numbers using relational operators
int main()
{
    int a,b,c;
    cout<<"enter three numbers: "<<endl;
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"a is greatest";
    }
    else if(b>a && b>c)
    {
        cout<<"b is greatest";
    }
    else
    {
        cout<<"c is greatest";
    }
}