#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool str_cmp(string s1, string s2);
int main()
{
    int t = 0;
    cin >> t;
    for (int z = 0; z < t; ++z)
    {
        int n = 0;
        vector<string> nums;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            string input;
            cin >> input;
            nums.push_back(input);
        }
        sort(nums.begin(), nums.end(), str_cmp);
        printf("case #%d:\n", z);
        for (int i = 0; i < n; i++)
            cout << nums[i] << " ";
        cout << endl;
    }
    return 0;
}
bool str_cmp(string s1, string s2)
{
    int i = -1;
    int j = -1;
    while (s1[++i] == '-')
        ;
    while (s2[++j] == '-')
        ;
    if (s1[i] != s2[j])
        return (s1[i] > s2[j]);
    else
        return (stoll(s1) < stoll(s2));
}