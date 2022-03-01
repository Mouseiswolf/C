#include<iostream>
#include<cstdio>
using namespace std;
int wsqh(int);
int main()
{
    int n;
    cin>>n;
    cout<<wsqh(n);
}
int wsqh(int n)
{
    if(!(n/10))
    {
        return n;
    }
    return n%10+wsqh(n/10);
}