include <iostream>
#include <algorithm>
using namespace std;

struct Point {
    int x, y;
};

bool compare(const Point& a, const Point& b) {
    long long distA = (long long)a.x * a.x + (long long)a.y * a.y;
    long long distB = (long long)b.x * b.x + (long long)b.y * b.y;
    return distA < distB;
}

int main() {
    int n;
    cin >> n;

    Point points[100];

    for (int i = 0; i < n; i++) {
        cin >> points[i].x >> points[i].y;
    }

    sort(points, points + n, compare);

    for (int i = 0; i < n; i++) {
        cout << points[i].x << " " << points[i].y << endl;
    }

    return 0;
}
