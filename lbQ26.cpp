#include<iostream>
using namespace std;
int main()
{
    int a[5];
    cout<<"Enter marks of 5 subjects obtained out of 100 ";
    for(int i=0; i<5; i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0; i<5; i++)
    {
        sum+=a[i];
    } 
    int percentage =sum/5;
    cout<<"Total marks: "<<sum<<endl;
    cout<<"Percentage: "<<percentage<<"%";  
}


