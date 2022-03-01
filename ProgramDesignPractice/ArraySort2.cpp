#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
bool compare(pair<int, int> p, pair<int, int> q);
int main()
{
    int t = 0;
    cin >> t;
    for (int z = 0; z < t; z++)
    {
        int n = 0;
        cin >> n;
        vector<int> array;
        vector<pair<int, int>> ivec; //储存每个元素出现次数，第一个为元素
        for (int i = 0; i < n; ++i)
        {
            int tmp;
            cin >> tmp;
            array.push_back(tmp);
        }
        sort(array.begin(), array.end() );
        pair<int, int> p1(array[0], 1);
        ivec.push_back(p1);
        int j = 0;
        for (int i = 1; i < n; i++)
        {
            if (array[i] == array[i - 1])
            {
                ivec[j].second++;
            }
            else
            {
                p1.first = array[i];
                p1.second = 1;
                ivec.push_back(p1);
                ++j;
            }
        }
        sort(ivec.begin(), ivec.end() , compare);
        printf("case #%d:\n", z);
        for (int i = 0; i <= j; i++)
        {
            for (int k = 0; k < ivec[i].second; k++)
                cout << ivec[i].first << " ";
        }
        cout << endl;
    }
    return 0;
}
bool compare(pair<int, int> p, pair<int, int> q)
{
    if (p.second < q.second)
        return 0;
    else if (p.second > q.second)
        return 1;
    else if(p.first <q.first)
        return 1;
    else if(p.first <q.first)
        return 0;
    else 
        return 0;
}