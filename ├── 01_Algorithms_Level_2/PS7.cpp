/*
Description: Write a program to read a number, then reverse it and 
print it as a number value.
*/

#include <iostream> 
using namespace std; 
 
int ReadPositiveNumber(string Message) 
{ 
 int Number = 0; 
 do 
 { 
  cout << Message << endl; 
  cin >> Number;  // 1234 
 } while (Number <= 0); 
 
 return Number; 
} 
int ReverseNumbers(int Number) 
{ 
 // Number = 1234 
 int Remainder = 0 , Number2 = 0; 
 while (Number > 0) // 1234 > 0 ?  
 { 
  Remainder = Number % 10; // 1234 % 10 = 4 | 123 % 10 = 3 .... 
  Number = Number / 10; //(int) 1234 / 10 = 123 | 123 / 10 = 12 
 
  Number2 = Number2 * 10 + Remainder;  
// 0 * 10 + 4 = 4 | 4 * 10 + 3 = 43 ..... 
 } 
 return Number2; // Number2 = 4321 
} 
int main() 
{ 
 cout << "\n  Reverse is : \n  " 
  << ReverseNumbers(ReadPositiveNumber("Pleas enter a positie Number ?")); 
}