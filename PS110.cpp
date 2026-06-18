// Number of Days in a Month Short Logic # 
 
#include <iostream> 
#include <string> 
 
using namespace std; 
 
// Problem #3 
 
bool IsLeapYear(short Year) 
{ 
 // if year is divisible by 4 AND not divisible by 100 
 // OR if year is divisible by 400 
 // then it is a leap year 
 
 return (Year % 4 == 0 && Year % 100 != 0) || 
(Year % 400 == 0); 
} 
 
// Problem #6 
 
short NumberOfDaysInAMonth(short Month, short Year) 
{
 if (Month < 1 || Month > 12) 
  return  0; 
  
 int NumberOfDays[12] = { 
31,28,31,30,31,30,31,31,30,31,30,31 }; 
  
 return (Month == 2) ? (IsLeapYear(Year) ? 29 
: 28)  : NumberOfDays[Month - 1];
 
}  
short NumberOfHoursInAMonth(short Month , short 
Year) 
{ 
 return NumberOfDaysInAMonth(Month , Year) * 24; 
} 
 
int NumberOfMinutesInAMonth(short Month , short 
Year) 
{ 
 return NumberOfHoursInAMonth(Month , Year) * 60; 
} 
 
int NumberOfSecondsInAMonth(short Month , short 
Year) 
{ 
 return NumberOfMinutesInAMonth(Month , Year) * 60; 
} 
 
 
 
 
short ReadYear() 
{ 
 short Year = 0; 
 
 cout << "\nPlease enter a year to check ? "; 
 cin >> Year; 
 
 return Year; 
} 
 
short ReadMonth() 
{ 
 short Month = 0; 
 
 cout << "\nPlease enter a Month to check ? "; 
 cin >> Month; 
 
 return Month; 
} 
 
int main() 
{ 
 // Problem #6 
 
 short Year = ReadYear(); 
 short Month = ReadMonth(); 
 
 cout << "\nNumber of Days in Month    [" << Month << "] is " 
  << NumberOfDaysInAMonth(Month, Year); 
 
 cout << "\nNumber of Hours in Month   [" << Month << "] is " 
  << NumberOfHoursInAMonth(Month, Year); 
 
 cout << "\nNumber of Minutes in Month [" << Month << "] is " 
  << NumberOfMinutesInAMonth(Month, Year); 
 
 cout << "\nNumber of Seconds in Month [" << Month << "] is " 
  << NumberOfSecondsInAMonth(Month, Year); 
 
 
 system("pause>0");  
  
 return 0; 
}