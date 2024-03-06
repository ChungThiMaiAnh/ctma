#include <iostream>
#include <sstream>
using namespace std;
bool nNhuan(int y) {
    return (y%4 == 0 && y%100 != 0) || (y%400 == 0);
}

int daysInMonth(int m, int y) {
    if (m == 2) {
        return nNhuan(y) ? 29 : 28;
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        return 30;
    } else {
        return 31; }
}
void addDays(int &d, int &m, int &y, int days) {
    d += days;
    while (d > daysInMonth(m, y)) {
        d -= daysInMonth(m, y);
        m++;
        if (m>12) {
            m = 1;
            y++;
     }
    }
    while (d<1) {
        m--;
        if (m<1) {
            m = 12;
            y--;
  }
        d += daysInMonth(m, y);
 }
}

int main() {

    string dateStr;
    getline(cin, dateStr);

    stringstream ss(dateStr);
    int d, m, y;
    char dash;
    ss >> d >> dash >> m >> dash >> y;

    int k;
    int D = d, M = m, Y = y;
    while (cin >> k && k != 0) {
        addDays(d, m, y, k);
        cout << d << "-" << m << "-" << y << endl;
        d = D; m = M; y = Y;
    }
}

