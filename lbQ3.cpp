#include<iostream>
using namespace std;
int main()
{
    int k=0;
   int tf;int tc;
   cout<<"enter 1 for Fahrenheit to Celsius conversion and 2 for Celsius to Fahrenheit conversion: ";
   cin>>k;
   if(k==1)
   {
   cout<<"enter temperature in Fahrenheit: ";
   cin>>tf;
   tc = (tf - 32) * 5/9;
   cout<<"Temperature in Celsius is: "<<tc;
   }
   if(k==2)
   {
    cout<<"enter temperature in Celsius: ";
    cin>>tc;
    tf = (tc * 9/5) + 32;
    cout<<"Temperature in Fahrenheit is: "<<tf;
   }
}