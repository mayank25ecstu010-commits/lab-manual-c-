#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int b=6;
    int temp;
    cout<<"first method";
    int temp=a;
    a=b;
    b=temp;
    cout<<"a = "<<a<<" b = "<<b;
    int a=5;int b=6;
    cout<<"second method";
    int a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a = "<<a<<" b = "<<b;
}