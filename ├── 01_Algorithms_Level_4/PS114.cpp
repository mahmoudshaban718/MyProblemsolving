/*
Write a program to print 
Total Days from the 
beginning of Year , Then 
Tack the Total Days and 
convert them back to data 
Please enter a Day to check ? 
13 
Please enter a Month to check 
? 8 
Please enter a year to check ? 
2023 
 
Number of Days from 
beginning of the Year Is : 225 
 
Date for [225] is: 13/8/2023 
 22 
*/
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
 
// Problem #10 
 
short NumberOfDaysFromTheBeginingOfTheYear(short Day, short Month, short Year) 
{ 
 short TotalDays = 0; 
 
 for (int i = 1 ; i <= Month - 1 ; i++) 
 { 
  TotalDays += NumberOfDaysInAMonth(i, Year); 
 } 
 TotalDays += Day; 
 
 return TotalDays; 
} 
 
// Problem #11 
 
struct sDate 
{ 
 short Year; 
 short Month; 
 short Day; 
}; 
 

sDate GetDateFromDayOrderInYear(short DateOrderInYear, short Year) 
{ 
 sDate Date;  
  
 short RemainingDays = DateOrderInYear;  
 short MonthDays = 0;  
 Date.Year = Year;  
  
 Date.Month = 1;  
  
 while (true)  
 { 
  MonthDays = NumberOfDaysInAMonth(Date.Month, Year); 
   
  if (RemainingDays > MonthDays)  
  { 
   RemainingDays -= MonthDays; 
   Date.Month++;  
  } 
  else  
  { 
   Date.Day = RemainingDays; 
   break; 
  } 
 } 
 return Date; 
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
int main() 
{ 
// Problem #11 
short Day = ReadDay(); 
short Month = ReadMonth(); 
short Year = ReadYear(); 
short DaysOrderInYear = NumberOfDaysFromTheBeginingOfTheYear(Day, Month, Year); 

cout << "\n\nNumber of Days from beginning of the Year Is : " 
<< DaysOrderInYear << endl; 
sDate Date; 
Date = GetDateFromDayOrderInYear(DaysOrderInYear, Year);  
cout << "\nDate for [" << DaysOrderInYear << "] is: ";   
cout << Date.Day << "/" << Date.Month << "/" << Date.Year; 
system("pause>0");  
return 0;
}