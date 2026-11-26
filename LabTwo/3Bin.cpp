#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double f(double x)
{
    return x * x + sqrt(x);
}

double BinSearch(double C)
{
    double l = 0;
    double r = sqrt(C);

    while (r - l > 1e-6)
    {
        double m = (l + r) / 2;

        if (f(m) < C)
        {
            l = m;
        }
        else
        {
            r = m;
        }
    }

    return (l + r) / 2;
}

int main()
{
    double C;

    cin >> C;

    double x = BinSearch(C);

    cout << fixed << setprecision(6) << x << endl;

    return 0;
}