#include<iostream>
using namespace std;
//WAP to find whether the entered date is correct or not.
int main()
{
    int d,m,y;
    cout<<"Enter date (dd mm yyyy): ";
    cin>>d>>m>>y;
    if(y>=1)
    {
        if(m>=1 && m<=12)
        {
            if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) && (d>=1 && d<=31))
                cout<<"Date is correct.";
            else if((m==4 || m==6 || m==9 || m==11) && (d>=1 && d<=30))
                cout<<"Date is correct.";
            else if(m==2)
            {
                if((y%4==0 && y%100!=0) || (y%400==0)) //leap year
                {
                    if(d>=1 && d<=29)
                        cout<<"Date is correct.";
                    else
                        cout<<"Date is incorrect.";
                }
                else //not a leap year
                {
                    if(d>=1 && d<=28)
                        cout<<"Date is correct.";
                    else
                        cout<<"Date is incorrect.";
                }
            }
            else
                cout<<"Date is incorrect.";
        }
        else
            cout<<"Date is incorrect.";
    }
    else
        cout<<"Date is incorrect.";
    return 0;
}