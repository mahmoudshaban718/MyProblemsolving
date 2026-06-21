/*
Write a program to read   a 
date and make functions as 
follows : 
Today is Sun , 20/8/2023
?
.
Is it End of Week
No , it is Not End of Week
?
Is it Weekend
No , today is : Sun Not a Week 
end
?
.
Is it Business Day
Yes , it is a Business Day
.
Days Until end of Week : 6 
Days
.
Days Until end of Month : 12 
Days
.
Days Until end of Month : 134 
Days
*/
#pragma warning(disable : 4996) 
#include <iostream> 
#include <string> 
#include <iomanip> 
#include <ctime> 
using namespace std; 
// Problem #11 
struct sDate 
{ 
short Year; 
short Month; 
short Day; 
}; 
// Problem #3 
bool IsLeapYear(short Year) 
{ 
return (Year % 4 == 0 && Year % 100 != 0) || 
(Year % 400 == 0); 
} 
// Problem #13 
bool IsDate1BeforeDate2(sDate Date1, sDate Date2)  
{ 
return  (Date1.Year < Date2.Year) ? true : 
((Date1.Year == Date2.Year) ?  
(Date1.Month < Date2.Month ? true : 
(Date1.Month == Date2.Month ?  
Date1.Day < Date2.Day : false)) 
: false);  
} 
//Problem #6 
short NumberOfDaysInAMonth(short Month, short Year) 
{ 
if (Month < 1 || Month > 12) 
return  0; 
int NumberOfDays[12] = { 
31,28,31,30,31,30,31,31,30,31,30,31 }; 
return (Month == 2) ? (IsLeapYear(Year) ? 29 : 
28) : NumberOfDays[Month - 1]; 
} 
// Problem #15 
 
bool IsLastDayInMonth(sDate Date) 
{ 
return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));  
} 
 
bool IsLastMonthInYear(short Month)  
{ 
 return (Month == 12);  
} 
 
// Problem #16 
 
sDate IncreaseDateByOneDay(sDate Date)  
{ 
 if (IsLastDayInMonth(Date))  
 { 
  if (IsLastMonthInYear(Date.Month))  
  { 
   Date.Month = 1; 
   Date.Day = 1;  
   Date.Year++;  
  } 
  else 
  { 
   Date.Day = 1;  
   Date.Month++;  
  } 
 } 
 else  
 { 
  Date.Day++; 
 } 
 return Date;  
} 
 
// Problem #17 
 
int GetDifferenceInDays(sDate Date1 , sDate Date2 , bool IncludeEndDay= false) 
{ 
 int Days = 0; 
 
 while (IsDate1BeforeDate2(Date1, Date2)) 
 { 
  Days++; 
  Date1 = IncreaseDateByOneDay(Date1); 
 } 
 return IncludeEndDay ? ++Days : Days; 
} 
 
// Problem #7 
 
short DayOfWeekOrder(short Day, short Month, short Year) 
{ 
 short a, y, m; 
 a = (14 - Month) / 12; 
 y = Year - a; 
 m = Month + (12 * a) - 2; 
 // Gregorian: 
 //0:sun, 1:Mon, 2:Tue...etc. 
 return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7; 
} 
 
short DayOfWeekOrder(sDate Date) 
{ 
 return DayOfWeekOrder(Date.Day, Date.Month, Date.Year); 
} 
 
 
 
string DayShortName(short DayOfWeekOrder) 
{ 
 string arrDayNames[7] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" }; 
  
 return arrDayNames[DayOfWeekOrder]; 
} 
// Problems From 47 To 53  
 
bool IsEndOfWeek(sDate Date) 
{ 
 return DayOfWeekOrder(Date) == 6; 
} 
 
bool IsWeekend(sDate Date) 
{ 
 // Weekends are Fri and Sat 
 short DayIndex = DayOfWeekOrder(Date); 
 return ( DayIndex == 6 || DayIndex == 5 ); 
} 
 
bool IsBusinessDay(sDate Date) 
{ 
 // Weekends are Sun , Mon , Tue , Wed and Thur 
 
 /* 
 short DayIndex = DayOfWeekOrder(Date); 
 return ( DayIndex >= 0 && DayIndex <= 4 ); 
 */ 
 
 return ! IsWeekend(Date); 
} 
 
short DaysUntilTheEndOfWeek(sDate Date) 
{ 
 return 6 - DayOfWeekOrder(Date) ; 
} 
 
short DaysUntilTheEndOfMonth(sDate Date) 
{ 
 sDate EndOfMonthDate; 
 
 EndOfMonthDate.Day = NumberOfDaysInAMonth(Date.Month, Date.Year);; 
 EndOfMonthDate.Month = Date.Month; 
 EndOfMonthDate.Year = Date.Year; 
  
 return GetDifferenceInDays(Date , EndOfMonthDate , true ); 
} 
 
short DaysUntilTheEndOfYear(sDate Date) 
{ 
 sDate EndOfMonthDate; 
 
 EndOfMonthDate.Day = 31; 
 EndOfMonthDate.Month = 12; 
 EndOfMonthDate.Year = Date.Year; 
 
 return GetDifferenceInDays(Date, EndOfMonthDate, true); 
} 
 
 
 
 
 
  
// Problem #7 
 
short ReadDay() 
{ 
 short Day = 0; 
 
 cout << "\nPlease enter a Day to check ? "; 
 cin >> Day; 
 return Day; 
} 
 
// Problem #5 
 
short ReadMonth() 
{ 
 short Month = 0; 
 
 cout << "\nPlease enter a Month to check ? "; 
 cin >> Month; 
 
 return Month; 
} 
 
// Problem #2 
 
short ReadYear() 
{ 
 short Year = 0; 
 
 cout << "\nPlease enter a year to check ? "; 
 cin >> Year; 
 
 return Year; 
} 
 
// Problem #12 
 
sDate ReadFullDate() 
{ 
 sDate Date; 
 
 Date.Day = ReadDay(); 
 Date.Month = ReadMonth(); 
 Date.Year = ReadYear(); 
 
 return Date; 
} 
 
// Problem #18 
 
sDate GetSystemDate() 
{ 
 sDate Date; 
 
 time_t t = time(0); 
 tm* now = localtime(&t); 
 
 Date.Year = now->tm_year + 1900; 
 Date.Month = now->tm_mon + 1; 
 Date.Day = now->tm_mday; 
 
 return Date; 
} 
 
 
int main() 
{ 
// Problems From 47 To 53  
 
 sDate Date; 
 
 
 Date = GetSystemDate(); 
 
 
 cout << "\nToday is " << DayShortName(DayOfWeekOrder(Date)) << " , " 
  << Date.Day << "/" << Date.Month << "/" << Date.Year << endl; 
 
 //-------------------- 
 cout << "\nIs it End of Week ? \n"; 
 
 if (IsEndOfWeek(Date)) 
  cout << "Yes , it is Saturday , it's of Week ."; 
 else 
  cout << "No , it is Not End of Week ."; 
 //-------------------- 
 
 cout << "\n\nIs it Weekend ? \n"; 
 
 if (IsWeekend(Date)) 
  cout << "Yes , it is a Week end ."; 
 else 
  cout << "No , today is : "<< DayShortName(DayOfWeekOrder(Date)) << " Not a Week end"; 
 //-------------------- 
 
 cout << "\n\nIs it Business Day ? \n"; 
   
 if (IsBusinessDay(Date)) 
  cout << "Yes , it is a Business Day ."; 
 else 
  cout << "No , it is Not Business Day ."; 
 //-------------------- 
 
 cout << "\n\nDays Until end of Week : "  
  << DaysUntilTheEndOfWeek(Date) << " Days."; 
 //-------------------- 
 
 cout << "\nDays Until end of Month : "  
  << DaysUntilTheEndOfMonth(Date) << " Days."; 
 //-------------------- 
 
 cout << "\nDays Until end of Month : "  
  << DaysUntilTheEndOfYear(Date) << " Days."; 
 //-------------------- 
 
 
 
 system("pause>0"); 
  
 return 0; 
}