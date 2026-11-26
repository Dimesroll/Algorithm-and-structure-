#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double a, b, c, d;

double f(double x)
{
    return ((a * x + b) * x + c) * x + d;
}

double BinSearch()
{
    double l = -10000;
    double r = 10000;

    while ((f(l) < 0) == (f(r) < 0))
    {
        l *= 2;
        r *= 2;
    }

    for (int i = 0; i < 100; i++)
    {
        double m = (l + r) / 2;

        if (f(m) == 0)
        {
            return m;
        }

        if ((f(l) < 0) != (f(m) < 0))
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }

    return (l + r) / 2;
}

int main()
{
    cin >> a >> b >> c >> d;

    double x = BinSearch();

    cout << fixed << setprecision(15) << x << endl;

    return 0;
}