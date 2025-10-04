#include<iostream>
using namespace std;
int main()
{
int n ,num , sum =0 ;
cout<<"Enter how many numbers you want to add : "<<endl;
cin>>n;
cout<<"Enter numbers : "<<endl;
for ( int i =1 ; i<=n ; i++)
{
    cin>>num;
    sum = sum + num ;
}
    cout<<"Sum of n natural numbers is : "<<sum<<endl;
return 0;
}