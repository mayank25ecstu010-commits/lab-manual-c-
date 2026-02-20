#include<iostream>
using namespace std;
int main()
{
    int a[5]; int sume=0;int sumo=0;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<5;j++)
    {
        if(a[j]%2==0)
        {
            sume+=a[j];
        }
        else
        sumo+=a[j];
    }
    cout<<"sum of even numbers"<<sume;
    cout<<"sum of odd numbers"<<sumo;
}