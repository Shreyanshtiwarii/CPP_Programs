#include<iostream>
using namespace std;
int main()
{
    int n,add=0;
    cout<<"Enter a number to print a  table : ";
    cin>>n;
    for(int i=1 ; i<=10 ; i++)
    {
        add=add+n;
       cout<<n<<" * "<<i<<" = "<<add<<endl;
    }
return 0;
}