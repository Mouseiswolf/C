#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<totalMoney(n)<<endl;
}
int totalMoney(int n){
int result=0;
int monday=0;
for(int i=1;i<=n;i++)
{
    if(i%7==1)
    {
        monday++;
        result+=monday;
    }
    else if(i%7==0)
    {
        result+=monday+6;
    }
    else
        result+=i%7-1+monday;
}
return result;
}