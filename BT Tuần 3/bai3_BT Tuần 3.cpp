#include <iostream>

using namespace std;

struct Point {
    double x;
    double y;
};

Point mid_point(const Point& p1, const Point& p2) {
    Point mid;
    mid.x = (p1.x + p2.x) / 2.0;
    mid.y = (p1.y + p2.y) / 2.0;
    return mid; }
int main() {
    Point point1 = {1.0, 2.0};
    Point point2 = {4.0, 6.0};

    cout << "Point 1: (" << point1.x << ", " << point1.y << ") \n";
    cout << "Point 2: (" << point2.x << ", " << point2.y << ") \n";
    Point mid = mid_point(point1, point2);
cout << "Trung diem cua hai diem: (" << mid.x << ", " << mid.y << ") \n";
}
