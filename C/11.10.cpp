#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[10000];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int max=n-1;
    for(int i=0;i<n/2;i++)
        {
            cout<<arr[max-i]<<" ";
            cout<<arr[i]<<" ";
        }
    if(n%2==1)
    {
        cout<<arr[n/2]<<" ";
    }
    return 0;
}