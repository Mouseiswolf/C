#include<iostream>
using namespace std;
int main()
{
    int size,temp;
    cin>>size;
    int data[100];
    for(int i=0;i<size;i++)
    {
        cin>>data[i];
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(data[j]>data[j+1])
            {
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
    for(int i=0;i<size;i++)
        cout<<data[i]<<" ";
    return 0;
}