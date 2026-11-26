#include <iostream>
using namespace std;

long long N, x, y;

bool canCopy(long long t)
{
    long long minTime = min(x, y);

    if (t < minTime)
    {
        return false;
    }

    long long copies = 1 + (t - minTime) / x + (t - minTime) / y;

    return copies >= N;
}

long long BinSearch()
{
    long long l = 0;
    long long r = N * min(x, y);
    long long ans = 0;

    while (l <= r)
    {
        long long m = l + (r - l) / 2;

        if (canCopy(m))
        {
            ans = m;
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> x >> y;

    cout << BinSearch() << endl;

    return 0;
}