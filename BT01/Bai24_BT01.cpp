///DayOfWeek.cpp
#include <iostream>

using namespace std;

int main()
{
    int day, month, year;
    cin >> day >> month >> year;

    int y0 = year - (14 - month)/12;
    int x = y0 + y0/4 - y0/100 + y0/400;
    int m0 = month + 12*((14 - month)/12) - 2;
    int day_of_week = (day + x + 31*m0/12)%7;

    switch(day_of_week){
        case 0: cout << "Chu Nhat"; break;
        case 1: cout << "Thu Hai"; break;
        case 2: cout << "Thu Ba"; break;
        case 3: cout << "Thu Tu"; break;
        case 4: cout << "Thu Nam"; break;
        case 5: cout << "Thu Sau"; break;
        case 6: cout << "Thu Bay"; break;
        default: cout << "error";
    }
    return 0;
}

