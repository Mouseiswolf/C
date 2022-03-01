#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int arr[50][50];
    for(int i=0;i<a;i++)//行遍历
    {
        for(int j=0;j<b;j++)//列遍历
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<b;i++)//列遍历
    {
        for(int j=0;j<a;j++)
        {
            cout<<arr[j][i];
            if(j<a-1)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}