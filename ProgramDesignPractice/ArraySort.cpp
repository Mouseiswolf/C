#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    string tmp;
    tmp="\n";
    getline(cin,tmp);
    for(int z=0;z<t;z++)
    {
        char alphabet[201]={0};
        string str;
        getline(cin,str);
        int length=str.length();
        int numofa=0;
        for(int i=0;i<length;i++)
        {
            if(str[i]>='A'&&str[i]<='Z')
            {
                alphabet[numofa++]=str[i];
                str[i]=0;
            }
        }
        sort(alphabet,alphabet+numofa,less<char>());
        printf("case #%d:\n",z);
        for(int i=0,j=0;i<length;i++)
        {
            if(str[i]==0)
                std::cout<<alphabet[j++];
            else
                std::cout<<str[i];
        }
        std::cout<<endl;
    }
    return 0;
}