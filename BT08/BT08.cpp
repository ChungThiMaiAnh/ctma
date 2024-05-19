Bài 1.

void print(Point p) {
    cout << "(" << p.x << ", " << p.y << ")";
}

int main() {
    Point point;
    point.x = 10;
    point.y = 12;
    print(point);
}

Bài 2.
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
    cout << "Point sau khi goi print1: (" << point.x << ", " << point.y << ")" << endl;

    cout << "Truyen tham bien:" << endl;
    print2(point);
    cout << "Point sau khi goi print2: (" << point.x << ", " << point.y << ")" << endl;
}


Bài 3.

Point mid_point(const Point& p1, const Point& p2) {
    Point mid;
    mid.x = (p1.x + p2.x) / 2;
    mid.y = (p1.y + p2.y) / 2;
    return mid;
}


Bài 4.
bài tập trên Hackerank đã làm.

Bài 5.
struct Rect {
    int x, y;
    int w, h;

    bool contains(const Point& p) const
    {
        return (p.x >= x && p.x <= x + w && p.y >= y && p.y <= y + h);
    }
};


Bài 6.

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

Bài 7.
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


Bài 8.
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

/// Nhận xét:
Khi chạy chương trình này, chúng ta sẽ nhận được địa chỉ của biến p, và sau đó là địa chỉ của các trường x và y.
Nhận xét rằng địa chỉ của y sẽ cao hơn so với địa chỉ của x, điều này là do các trường trong một cấu trúc được
lưu trữ theo thứ tự mà chúng được khai báo. Trong trường hợp này, trường x được khai báo trước y, nên nó sẽ có địa chỉ thấp hơn trong bộ nhớ.


Bài 9.
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

Bài 10.

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

Kết quả là:
Original:
original.array[0] = 1
original.array[1] = 2
original.array[2] = 3
original.array[3] = 4
original.array[4] = 5
original.rect.width = 10
original.rect.height = 20

Copy:
copy.array[0] = 100
copy.array[1] = 2
copy.array[2] = 3
copy.array[3] = 4
copy.array[4] = 5
copy.rect.width = 50
copy.rect.height = 20

Như bạn có thể thấy, khi chúng ta thay đổi một phần của biến struct copy, các giá trị trong mảng
array và cả chiều rộng của rect đều thay đổi trong cả hai biến original và copy. Điều này xảy ra vì
phép gán mặc định của C++ chỉ thực hiện sao chép nông, không tạo ra các bản sao sâu cho các trường dữ liệu
đối tượng như mảng hoặc biến struct.



Bài 11.
#include <bits/stdc++.h>

using namespace std;

struct String {
    int n;
    char* str;

    String(const char* s) {
        n = strlen(s);
        str = new char[n + 1]; // Cấp phát mảng động với kích thước đủ
        strcpy(str, s); // Sao chép nội dung của xâu s vào str
    }

    // Destructor
    ~String() {
        delete[] str; // Giải phóng bộ nhớ của mảng động str
    }
    void print() const {
        cout << str;
    }

    // Hàm nối thêm xâu vào cuối xâu hiện tại
    void append(const char* s) {
        int len = strlen(s);
        char* temp = new char[n + len + 1]; // Cấp phát mảng động mới đủ lớn
        strcpy(temp, str); // Sao chép nội dung của xâu hiện tại vào temp
        strcat(temp, s); // Nối xâu s vào sau xâu hiện tại
        delete[] str; // Giải phóng bộ nhớ của mảng động str cũ
        str = temp; // Trỏ str tới mảng mới temp
        n += len; // Cập nhật độ dài của xâu
    }
};

int main() {
    String greeting("Hi");
    cout << "Initial string: ";
    greeting.print();
    cout << endl;

    // Thử nghiệm hàm append
    greeting.append(" there");
    cout << "After appending: ";
    greeting.print();
    cout << endl;
}

Kết quả:
Initial string: Hi
After appending: Hi there

Trong chương trình trên, chúng ta đã triển khai các yêu cầu của cấu trúc String một cách đầy đủ.
Phương pháp append được thực hiện bằng cách cấp phát một mảng động mới đủ lớn, sao chép nội dung của
xâu hiện tại vào mảng mới, sau đó nối xâu mới vào cuối và giải phóng bộ nhớ của mảng động cũ.
