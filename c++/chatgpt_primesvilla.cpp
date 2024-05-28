#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isPrime(int month) {
    return (month == 2 || month == 3 || month == 5 || month == 7 || month == 11);
}

bool isWeekdayRepeating(const string& startWeekday, int days) {
    string weekdays[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    int startDay = distance(weekdays, find(weekdays, weekdays + 7, startWeekday));
    int finalDay = (startDay + days) % 7;
    return weekdays[startDay] == weekdays[finalDay];
}

int main() {
    string date, dow;
    long long n;
    cin >> date >> dow >> n;

    int day = stoi(date.substr(6, 2));
    int month = stoi(date.substr(4, 2));
    int year = stoi(date.substr(0, 4));

    int daysInMon[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int startDay = day;

    bool leapYear = isLeapYear(year);
    int num = 0;

    while (num <= n) {
        if (isPrime(month)) {
            while (num <= n) {
                if (isPrime(num) && isWeekdayRepeating(dow, num)) {
                    cout << "Yes " << num << endl;
                    return 0;
                } else {
                    num++;
                }
            }
        } else {
            int monthDays = daysInMon[month - 1];
            if (leapYear && month == 2) {
                monthDays = 29;
            }
            month = (month % 12) + 1;
            num += monthDays - day + 1;
            day = 1;
        }
    }
    cout << "No 0" << endl;
    return 0;
}
