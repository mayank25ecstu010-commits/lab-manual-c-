#include<iostream>
using namespace std;
int main()
{
    int unit_price;
    int quantity;
    cout<<"enter unitprice for the item ";
    cin>>unit_price;
    cout<<"enter quantity of the item ";
    cin>>quantity;
    int total = unit_price * quantity;
    int amount= total-(0.2*total);
    cout<<"Amount after discount is: "<<amount;
    
    

}