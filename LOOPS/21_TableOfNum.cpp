#include<iostream>
using namespace std;
//WAP to generate a table of number entered by user (using multiplication operation)
int main()
{
    int n;
    cout <<"Enter a number to print a table : ";
    cin>>n;
    for (int i=1 ; i<=10 ; i++)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}