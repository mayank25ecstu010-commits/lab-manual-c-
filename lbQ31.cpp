#include<iostream>
using namespace std;
int main()
{
    int a[5]; int k=0;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<5;j++)
    {
        if(a[j]%3==0 && a[j]%5==0)
        {
            k++;
        }
    }
    cout<<"Count of numbers divisible by both 3 and 5: "<<k;
}