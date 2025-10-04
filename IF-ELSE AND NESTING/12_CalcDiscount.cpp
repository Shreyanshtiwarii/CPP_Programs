#include<iostream>
using namespace std;
//WAP to calculate discount based on quantity (10% for more than 10 items and 15% for more than 20 items)
int main()
{
    int quantity,discount=0,price,totalBill;
    cout<<"Enter quantity: ";
    cin>>quantity;
    cout<<"Enter price: ";
    cin>>price;
    totalBill=quantity*price;
    if (quantity>10)
    {
        cout<<"Bill amount is: "<<totalBill<<endl;
        discount=totalBill*0.10;
        cout<<"The 10 percent discount is added to bill"<<endl;
        cout<<"The discount amount  is : "<<discount<<endl;
        totalBill=totalBill-discount;
        cout<<"Bill amount after discount is: "<<totalBill;
    }
    else if (quantity>15)
    {
        cout<<"Bill amount is: "<<totalBill<<endl;
        discount=totalBill*0.15;
        cout<<"The 15 percent of discount is added to bill"<<endl;
        cout<<"The discount amount  is : "<<discount<<endl;
        totalBill=totalBill-discount;
        cout<<"Bill amount after discount is: "<<totalBill;
    }
    else
    {
        cout<<"Bill amount is: "<<totalBill<<endl;
        cout<<"The 0 percent of discount is added to bill"<<endl;
        cout<<"The discount amount  is : "<<discount<<endl;
        cout<<"Bill amount is: "<<totalBill;
    }
    return 0;
}