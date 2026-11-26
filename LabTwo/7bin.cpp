#include <iostream>
using namespace std;

int a[10001];
int n, k;

bool canCut(int d)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        count += a[i] / d;
    }

    return count >= k;
}

int BinSearch()
{
    int l = 1;
    int r = 10000000;
    int ans = 0;

    while (l <= r)
    {
        int m = l + (r - l) / 2;

        if (canCut(m))
        {
            ans = m;
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }

    return ans;
}

int main()
{
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << BinSearch() << endl;

    return 0;
}