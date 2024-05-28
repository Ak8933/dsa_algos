#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool isPrime(int n){
    if (n <= 1)
        return false;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
    return true;
}

bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    string date, dow;
    long long n;
    cin >> date >> dow >> n;
    // 20211201 Sun 100
    int day = stoi(date.substr(6, 2));
    int month = stoi(date.substr(4, 2));
    int year = stoi(date.substr(0, 4));
    int daysinmon[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int startDay = day;
    bool leapyear = isLeapYear(year);
    long long num = 0;

    while(num<=n){
        if (isPrime(month)){
            while(num <= n){
                if(isPrime(num) && ((num-1)%7)==0){
                    cout<<"yes "<<num;
                    return 0;
                }
                else{
                    num++;  
                }
            }
        }
        else{
            int monthDays = daysinmon[month-1];
            if (leapyear && month==2) monthDays=29;
            month = (month+1)%12;
            num += monthDays-day+1;
            day = 1;
        }
    }
    cout << "no "<<"0";
    return 0;
}