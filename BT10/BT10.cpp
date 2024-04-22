Phần A:
1.
#include<iostream>
#include<cstring>
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
#include<iostream>
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




BÀI 2. Banner (*). Làm phiên bản mới hơn của bài Banner từ BT08, trong đó kích thước banner
(vùng hiển thị) được nhập vào dưới dạng tham số dòng lệnh, không giới hạn giá trị lớn nhất
của số dòng, số cột. Mảng chứa vùng hiển thị được cấp phát động thay vì khai báo sẵn. (chỉ dùng con trỏ và mảng thường của C)



