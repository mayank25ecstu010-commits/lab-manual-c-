#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the three scores: ";
    cin>>a>>b>>c;
    if(a>=b && a>=c)
        cout<<"The highest score is: "<<a<<endl;
    else if(b>=a && b>=c)
        cout<<"The highest score is: "<<b<<endl;
    else
        cout<<"The highest score is: "<<c<<endl;
}