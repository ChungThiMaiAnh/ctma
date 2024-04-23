Phần A:
1.
#include <bits/stdc++.h>

using namespace std;

char* concat(const char* str1, const char* str2) {
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    size_t Length = len1 + len2;
    char* result = new char[Length + 1];
    strcpy(result, str1);
    strcat(result, str2);
    return result;
}

int main() {
    const char* s1 = "Hello";
    const char* s2 = "World";
    char* concatenated = concat(s1, s2);
    cout << concatenated << endl;
    delete[] concatenated;
}

2.
 int* p = new int;
 int* p2 = p;
 *p = 10;
 delete p;
*p2 = 100;
 cout << *p2;
 delete p2; // Lỗi double delete, giải phóng một bộ nhớ đã được giải phóng trước đó.
Sửa lại thành:
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p;
    // không có *p2 = 100; nó gây ra lỗi vì đã xóa p rồi
    cout << *p2 << endl;
    delete p2;

3.
char* a = new char[10];  // cấp phát một mảng char động với kích thước 10
char* c = a + 3;          // c là con trỏ trỏ đến phần tử thứ 4 của mảng a
for (int i = 0; i < 9; i++)
    a[i] = 'a';           // gán giá trị 'a' cho các phần tử của mảng a
a[9] = '\0';              // đặt ký tự kết thúc chuỗi '\0' tại phần tử cuối cùng của mảng a
cerr << "a: " << "-" << a << "-" << endl;  // in ra nội dung của mảng a
cerr << "c: " << "-" << c << "-" << endl;  // in ra nội dung của mảng c (bắt đầu từ phần tử thứ 4 của a)
delete c;                                 // xóa con trỏ c, nhưng không xóa con trỏ a
cerr << "a after deleting c:" << "-" << a << "-" << endl; // in ra nội dung của mảng a sau khi xóa con trỏ c

Lệnh in cerr sau khi xóa con trỏ c sẽ lỗi vì sau khi xóa con trỏ c, con trỏ a không còn trỏ đến vùng nhớ hợp lệ, nên xảy ra lỗi truy cập vùng nhớ không được cấp phát, có thể gây hành vi không xác định.

4.
#include <bits/stdc++.h>

using namespace std;

int* localPoint()
{
    int localValriable = 10;
    int* ptr = &localValriable;
    return ptr;
}

int main()
{
    int* ptrToLocal = localPoint();
    delete ptrToLocal;
    cout << *ptrToLocal << endl;
}

Phần C:

BÀI 1. Xử lý xâu. Làm phiên bản khác của bài Xử lý xâu từ BT08 (ngoại trừ is_palindrome),
trong đó tất cả các tham số hàm đều ở dạng const. Nghĩa là hàm không được sửa giá trị của
các xâu kí tự đầu vào, thay vào đó, nó cần cấp phát mảng mới để lưu kết quả và trả về địa chỉ của mảng kết quả.

cau1.
char* print(const Point& p) {
    // Cấp phát mảng mới để lưu kết quả
    char* result = new char[15]; // Đủ lớn để chứa "(x, y)\0"

    // Format tọa độ và gán vào mảng kết quả
    sprintf(result, "(%d, %d)", p.x, p.y);

    // Trả về địa chỉ của mảng kết quả
    return result;
}

cau2.
#include <bits/stdc++.h>

using namespace std;

// Định nghĩa cấu trúc Point
struct Point {
    int x, y;
};

// Hàm thay đổi tọa độ của điểm theo truyền tham trị
char* changeCoordinatesByValue(const Point p) {
    stringstream ss;
    ss << "(" << p.x << ", " << p.y << ")";
    string result_str = ss.str();
    char* result = new char[result_str.length() + 1];
    strcpy(result, result_str.c_str());
    return result;
}

// Hàm thay đổi tọa độ của điểm theo truyền tham biến
char* changeCoordinatesByReference(const Point& p) {
    stringstream ss;
    ss << "(" << p.x << ", " << p.y << ")";
    string result_str = ss.str();
    char* result = new char[result_str.length() + 1];
    strcpy(result, result_str.c_str());
    return result;
}

int main() {
    Point point = {10, 20};

    // Thử nghiệm sự khác nhau giữa truyền tham trị và tham biến
    char* result1 = changeCoordinatesByValue(point);
    cout << "Result from changeCoordinatesByValue: " << result1 << endl;
    delete[] result1;

    char* result2 = changeCoordinatesByReference(point);
    cout << "Result from changeCoordinatesByReference: " << result2 << endl;
    delete[] result2;
}

Kết quả:
Result from changeCoordinatesByValue: (10, 20)
Result from changeCoordinatesByReference: (10, 20)

cau3.
Point mid_point(const Point& p1, const Point& p2) {
    Point mid;
    mid.x = (p1.x + p2.x) / 2;
    mid.y = (p1.y + p2.y) / 2;
    return mid;
}

cau5.
struct Rect {
    int x, y;
    int w, h;

    bool contains(const Point& p) const
    {
        return (p.x >= x && p.x <= x + w && p.y >= y && p.y <= y + h);
    }
};

cau6.
struct Point {
    int x, y;
};

struct Rect {
    int x, y;
    int w, h;
};

struct Ship {
    Rect rect;
    string id;
    int dx, dy;

    void move() {
        rect.x += dx;
        rect.y += dy;
    }
};

void display(const Ship& ship) {
    cout << "Ma tau :" << ship.id << endl;
    cout << "Toa do: (" << ship.rect.x << ", " << ship.rect.y << ")" << endl;
}

cau7.
#include <bits/stdc++.h>

using namespace std;

struct Point {
    int x, y;
};

struct Rect {
    int x, y;
    int w, h;
};

struct Ship {
    Rect rect;
    string id;
    int dx, dy;

    void move() {
        rect.x += dx;
        rect.y += dy;
    }
};

void display(const Ship& ship) {
    cout << "Ship ID: " << ship.id << endl;
    cout << "Position: (" << ship.rect.x << ", " << ship.rect.y << ")" << endl;
}

int main() {
    Ship ship1 = {{1, 2, 3, 4}, "Ship1", 0, 1};
    Ship ship2 = {{5, 6, 3, 4}, "Ship2", -2, -1};
    int loop = 0;
    while (loop < 10) {
        ship1.move();
        ship2.move();
        display(ship1);
        display(ship2);
        loop++;
    }
}

cau8.
Ví dụ:
#include <bits/stdc++.h>

using namespace std;

struct Point {
    int x, y;
};

int main() {
    Point p;

    cout << "Dia chi p: " << &p << endl;
    cout << "Dia chi x: " << &(p.x) << endl;
    cout << "Dia chi y: " << &(p.y) << endl;
}

cau 9.
#include <bits/stdc++.h>

using namespace std;

struct Point {
    int x, y;
};

void print1(Point p)
{
    p.x = 1;
    p.y = 2;
    cout << "Truyen tham tri: (" << p.x << ", " << p.y << ")" << endl;
}

void print2(Point &p) /// khi để const (const Point &p) thì sẽ không thay đổi được các giá trị của p thành x = 3, y = 4 nữa.
{
    p.x = 3;
    p.y = 4;
    cout << "Truyen tham bien: (" << p.x << ", " << p.y << ")" << endl;
}

int main() {
    Point point;
    point.x = 10;
    point.y = 12;

    cout << "Original point: (" << point.x << ", " << point.y << ")" << endl;
    cout << "Truyen tham tri:" << endl;
    print1(point);
    cout << "Point sau khi goi print1: (" << point.x << ", " << point.y << ")" << endl; /// kết quả in ra là (10, 12)
    cout << "Truyen tham bien:" << endl;
    print2(point);
    cout << "Point sau khi goi print2: (" << point.x << ", " << point.y << ")" << endl;/// kết quả in ra là (3, 4)

}

cau10.
#include <bits/stdc++.h>
using namespace std;
struct Rectangle {
int width;
 int height;
};
struct Container {
int array[5];
Rectangle rect;
};
int main() {
    Container original;
    for (int i = 0; i < 5; ++i) {
        original.array[i] = i + 1;
    }
    original.rect.width = 10;
    original.rect.height = 20;

    // Sao chép biến struct original vào biến struct copy
    Container copy = original;

    // Thay đổi một số giá trị trong biến struct copy
    copy.array[0] = 100;
    copy.rect.width = 50;
    cout << "Original:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "original.array[" << i << "] = " << original.array[i] << endl;
    }
    cout << "original.rect.width = " << original.rect.width << endl;
    cout << "original.rect.height = " << original.rect.height << endl;

    cout << "\nCopy:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "copy.array[" << i << "] = " << copy.array[i] << endl;
    }
    cout << "copy.rect.width = " << copy.rect.width << endl;
    cout << "copy.rect.height = " << copy.rect.height << endl;
}



