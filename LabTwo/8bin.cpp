#include <iostream>
using namespace std;

bool Can(long long n, long long w, long long h, long long boardSize)
{
    long long rows = boardSize / h;
    long long columns = boardSize / w;

    return rows * columns >= n;
}

int main()
{
    long long w;
    long long h;
    long long n;

    cin >> w >> h >> n;

    long long l = 0;
    long long r = max(w, h) * n;

    while (l + 1 < r)
    {
        long long m = l + (r - l) / 2;
        if (Can(n, w, h, m))
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }

    if (Can(n, w, h, l))
    {
        cout << l;
    }
    else
    {
        cout << r;
    }
}