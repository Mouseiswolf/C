#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i += 2)
        {
            if (nums[i] != nums[i + 1])
                return nums[i];
        }
    }
};