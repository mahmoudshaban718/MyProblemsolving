 /*
 Write a program to read   
Calculate you Age in Days  
Please Enter Your Date of Birth : 
Please enter a Day to check ? 
13 
Please enter a Month to check 
? 12 
Please enter a year to check ? 
1999 
 
Your Age is : 8648 Day(s) . 
 40 
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
 return  (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ?  
  (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ?  
   Date1.Day < Date2.Day : false)) : false);  
} 
 
//Problem #6 
 
short NumberOfDaysInAMonth(short Month, short Year) 
{ 
 if (Month < 1 || Month > 12) 
  return  0; 
 
 int NumberOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; 
 
    return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1]; 
 
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
 // Problem #18 
 
 cout << "\nPlease Enter Your Date of Birth:\n"; 
 
 sDate Date1 = ReadFullDate(); 
 
 sDate Date2 = GetSystemDate(); 
 
 cout << "\nYour Age is : "  
  << GetDifferenceInDays(Date1, Date2 , true) << " Day(s)."; 
  
 
 
 system("pause>0"); 
  
 return 0; 
} 
