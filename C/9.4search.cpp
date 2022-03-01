#include<iostream>
using namespace std;
int main()
{
    int n,a[100],num,isfd=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>num;
    for(int i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            cout<<i<<" ";
            isfd++;
        }

    }
    if(isfd==0)
        cout<<"ERROR";

}
