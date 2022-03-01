#include<iostream>
using namespace std;
int main()
{
    int data[100];
    int n,in,innum;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    cin>>innum>>in;
    for(int i=n-1;i>=innum;i--)
    {
        data[i+1]=data[i];
    }
    data[innum]=in;
    for(int i=0;i<=n;i++)
        cout<<data[i]<<" ";
    return 0;
}