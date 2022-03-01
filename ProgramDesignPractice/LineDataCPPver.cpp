#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef vector<vector<int>> _2divec;
typedef vector<int> ivec;
bool iveccmp(ivec v1,ivec v2);
int main()
{
    int t=0;
    cin>>t;
    for(int z=0;z<t;z++)
    {
        int n;
        _2divec nums;
        
        cin>>n;
        for(int i=0;i<n;++i)
        {
            int input;
            ivec temp;
            cin>>input;
            while(input!=-1)
            {
                temp.push_back(input);
                cin>>input;
            }
            temp.push_back(0);//防止越界，他不能有两个完全一样的数组吧
            nums.push_back(temp);
        }
        sort(nums.begin(),nums.end(),iveccmp);
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<(int)nums[i].size()-1;++j)
                cout<<nums[i][j]<<" ";
            cout<<endl;
        }
    }
}
bool iveccmp(ivec v1,ivec v2)
{
    int i=-1;
    while(v1[++i]==v2[i]);//越界了 我淦（划去）已解决
    return v1[i]>v2[i];
}