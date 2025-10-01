#include<iostream>
using namespace std;
//WAP to check whether a character is vowel or consonant using logical operators
int main()
{
    char ch;
    cout<<"Enter an aplhabet: ";
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        cout<<"The alphabet is a vowel";
    }
    else
    {
        cout<<"The alphabet is a consonant";
    }
    return 0;
}