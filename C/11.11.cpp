#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    int arr[100000];
    int maxs = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int s = 0;
            int min = arr[i] < arr[j] ? arr[i] : arr[j];
            s = min * (j - i) ;
            // cout << s << endl;
            if (maxs < s)
                maxs = s;
        }
    }
    cout << maxs << endl;
    return 0;
}
