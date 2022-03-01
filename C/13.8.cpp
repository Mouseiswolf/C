#include<iostream>

using namespace std;
int mhs(long long int num);
int main()
{
    long long int num;
    cin>>num;
    if(mhs(num)==1)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
    return 0;
}
int mhs(long long int num)
{
    int ans=0;
    if(num==1)
        ans=1;
    else if(num==0)
        ans=0;
    else if(num%2==0)
        return mhs(num/2);
    else if(num%3==0)
        return mhs(num/3);
    else
        ans=0;
    return ans;
}
