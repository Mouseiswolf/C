#include <iostream>
#include <vector>
using namespace std;
int main()
{
    class solution{};
    solution ans;
}
class solution
{
    public:
        int minimumDifference(vector<int>& nums, int k)
        {
            
        }
        void sort(int *nums,int i)
        {
            for(int j=0;j<i;j++)
            {
                int maxnum=0;
                for(int k=0;k<i-j;k++)
                {
                    if(nums[k]>nums[maxnum])
                        maxnum=k;
                }
                int tmp=nums[i-j];
                nums[i-j]=nums[maxnum];
                nums[maxnum]=tmp;
            }
        }
};