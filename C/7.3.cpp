#include<iostream>
#include<cstdio>
using namespace std;
int bin(int);
int main()
{
    int n;
    cin>>n;
    bin(n);
    return 0;
}
int bin(int n)
{
    if(!n)
    return 0;
    bin(n/2);
    cout<<n%2<<" ";
}