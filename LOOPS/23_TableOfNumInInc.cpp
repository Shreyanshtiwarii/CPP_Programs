//WAP to generate a table of any number entered by user (using calculations in condition and Increment / decrement fields of for loop)	
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number to print a table : ";
    cin>>n;
    for (int i = 1; i<=10 && cout<<n<<" * "<<i<<" = "<<n*i<<endl;i++ );
return 0;
}