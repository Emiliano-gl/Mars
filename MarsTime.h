#ifndef MARSTIME_H
#define MARSTIME_H

#include <ctime>
#include <sstream>
#include <cstdlib>
#include <vector>

using namespace std;

namespace mtime {
  auto getDay() -> int{
    time_t t = time(NULL);
    tm* timePtr = localtime(&t);

    stringstream ss_day;
    ss_day << timePtr->tm_mday;
    string Day = ss_day.str();

    return stoi(Day);
  }

  auto getMonth() -> int{
    time_t t = time(NULL);
    tm* timePtr = localtime(&t);

    stringstream ss_month;
    ss_month << timePtr->tm_mon+1;
    string Month = ss_month.str();

    return stoi(Month);
  }

  auto getYear() -> int{
    time_t t = time(NULL);
    tm* timePtr = localtime(&t);

    stringstream ss_year;
    ss_year << timePtr->tm_year+1900;
    string Year = ss_year.str();

    return stoi(Year);
  }

  auto getAge(const int &day, const int &month, const int &year) -> int{
    int age = getYear() - year;

    if(month < getMonth())
      return age;

    if(month > getMonth())
      return age-1;

    if(month == getMonth()){
        if(day <= getDay())
          return age;
        else
          return age-1;
    }

    return age;

  }

  auto secondsToTime(const int &seconds) -> vector<int>{
    int hours = 0;
    int res = 0;
    int min = 0;

    hours = seconds / 3600;
    res = seconds % 3600;
    min = res / 60;
    res %= 60;

    vector<int> time = {hours, min, res};

    return time;
  }
}

#endif // MARSTIME_H
