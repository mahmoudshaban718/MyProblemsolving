// Problem 3 : Leap Year ( One Line Of Code ) # 
 
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
 // Problem #3 
 
 short Year = ReadYear(); 
 
 if (IsLeapYear(Year)) 
  cout << "Yes , Year [" << Year << "] is a leap year. \n"; 
 else 
  cout << "No , Year [" << Year << "] is NOT a leap year. \n"; 
 
 
 system("pause>0");  
  
 return 0; 
}