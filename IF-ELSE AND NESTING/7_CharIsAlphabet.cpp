#include<iostream>
using namespace std;
//WAP to find whether the given  character is alphabet or not.
int main()
{
    char ch;
    cout<<"Enter an alphabet: ";
    cin>>ch;
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
        cout<<ch<<" "<<"is an alphabet";
    }
    else{
        cout<<ch<<" "<<"is not an alphabet";
    }
    return 0;
}