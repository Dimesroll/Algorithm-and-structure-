#include <iostream>
#include <vector>
using namespace std;

int BinSearch(int a[], int n, int targetValue)
{
    int l = 0;
    int r = n - 1;

    while (l <= r)
    {
        int m = (l + r) / 2;

        if (a[m] == targetValue)
        {
            return m;
        }

        if (a[m] > targetValue)
        {
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }

    if (l == 0)
    {
        return 0;
    }

    if (l == n)
    {
        return n - 1;
    }

    int distLeft = targetValue - a[l - 1];
    int distRight = a[l] - targetValue;

    if (distLeft <= distRight)
    {
        return l - 1;
    }
    else
    {
        return l;
    }
}

int main()
{
    int n;
    int k;

    cin >> n >> k;

    int a[100000];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        cout << a[BinSearch(a, n, x)] << endl;
    }

    return 0;
}