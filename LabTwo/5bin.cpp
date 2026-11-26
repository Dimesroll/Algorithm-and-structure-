#include <iostream>
using namespace std;

int a[10001];
int n, k;

bool canPlace(int d)
{
    int count = 1;
    int last = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] - last >= d)
        {
            count++;
            last = a[i];
        }
    }

    return count >= k;
}

int BinSearch()
{
    int l = 0;
    int r = a[n - 1] - a[0];
    int ans = 0;

    while (l <= r)
    {
        int m = (l + r) / 2;

        if (canPlace(m))
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