/*
Description: Write a program to read a number, then check if it is a 
Palindrome number or not.
*/
#include <iostream> 
using namespace std; 
 
int ReadPositiveNumber(string Message) 
{ 
 int Number = 0; 
 do 
 { 
  cout << Message << endl; 
  cin >> Number; // 12321 
 } while (Number <= 0); 
 
 return Number; 
} 
int ReverseNumbers(int Number) 
{ 
 // Number = 1234 
 int Remainder = 0; 
 int Number2 = 0; 
 while (Number > 0)  // 12321 > 0 ? | 1232 > 0 ? .... 
 { 
  Remainder = Number % 10;  // 12321 % 10 = 1 | 1232 % 10 = 2
  Number /= 10;  // 12321 / 10 = 1232 | 1232 / 10 = 123 .... 
  Number2 = Number2 * 10 + Remainder; 
  // 0 * 10 + 1 = 1 | 1 * 10 + 2 = 12  .... 
 } 
 return Number2;// Number2 = 12321 
} 
bool IsPalindrome(int Number) 
{ 
 // Number = 12321 
 // Number = 1234 
 return Number == ReverseNumbers(Number);  
// 12321 == 12321 ? true , ( 1234 == 4321 ? false ) 
} 
int main() 
{ 
 if (IsPalindrome(ReverseNumbers(ReadPositiveNumber("Pleas enter a positie Number ?")))) 
  cout << "\n  Yes , it is a Palindrome number \n";  
 // true 12321 
 else 
  cout << "\n  No , it is NOT a Palindrome number \n";   
// false 1234 
 }