#include<iostream>
using namespace std;
int main()
{
    int n,del,isdel=0;
    int a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>del;
    for(int i=0;i<n;i++)
    {
        if(del==a[i])
        {
            for(int j=i+1;j<n;j++)
            {
                a[j-1]=a[j];
            }
            isdel=1;
            break;
        }
    }
    if(isdel==0)
        cout<<"ERROR";
    else
    {
        for(int i=0;i<n-1;i++)
            cout<<a[i]<<" ";
    }
    return 0;
}