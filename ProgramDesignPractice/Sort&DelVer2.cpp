#include <iostream>
#include <algorithm>
#include <vector>
#define SIZE 100
using namespace std;
int main()
{
    int array[100]={0};
    char ch=0;
    int n=0;
    cin>>ch;
    while(cin>>array[n++]);
    if(ch=='A')
        sort(array,array+n-1,less<int>());
    else if(ch=='D')
        sort(array,array+n-1,greater<int>());
    cout<<array[0];
    for(int i=1;i<n-1;i++)
    {
        if(array[i-1]!=array[i])
            cout<<' '<<array[i];
    }
    return 0;
}