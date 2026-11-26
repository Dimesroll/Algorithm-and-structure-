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
            return true;
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
    return false;
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
        if (BinSearch(a, n, x))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}