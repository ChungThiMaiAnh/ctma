#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;
};

void pV(Point p) {
    p.x = 10;
    p.y = 20;
}

// Hàm thay đổi giá trị của một Point theo cách truyền tham biến
void pR(Point &p) {
    p.x = 10;
    p.y = 20;
}

int main() {
    Point point1 = {5, 5};
    Point point2 = {5, 5};

    cout << "Truoc khi thay doi:\n";
    cout << "Point 1: (" << point1.x << ", " << point1.y << ")\n";
cout << "Point 2: (" << point2.x<< ", " << point2.y << ") \n\n";
pV(point1);
    cout << "Sau khi thay doi Point 1 (truyen tham tri): \n";
    cout << "Point 1: (" << point1.x << ", " << point1.y << ") \n\n";
    pR(point2);
    cout << "Sau khi thay doi Point 2 (truyen tham bien): \n";
   cout << "Point 2: (" << point2.x << ", " << point2.y << ") \n";
}
