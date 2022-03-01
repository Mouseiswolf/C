#include<iostream>
using namespace std;
int main()
{
    int n,num=0,test,ans=0;
    int a[100],b[100]={0};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    test=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]==test)
        {
            b[num]++;
        }
        else
        {
            num++;
            test=a[i];
            b[num]++;
        }
    }
    ans=b[0];
    for(int i=0;i<num;i++)
    {
        if(ans<b[i])
            ans=b[i];
    }
    cout<<ans;
    return 0;
}