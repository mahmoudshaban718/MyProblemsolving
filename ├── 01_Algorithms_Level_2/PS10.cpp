/**
 Description: Write a program to read a number, then print its digits 
in order from left to right.
 */
#include <iostream> 
using namespace std; 
 
int ReadPositiveNumber(string Message) 
{ 
 int Number = 0; 
 do 
 { 
  cout << Message << endl; 
  cin >> Number; // 1234 
 } while (Number <= 0); 
 
 return Number; 
} 
int ReverseNumbers(int Number) 
{ 
 // Number = 1234 
 int Remainder = 0; 
 int Number2 = 0; 
 while (Number > 0)  // 1234 > 0 ? | 123 > 0 ? .... 
 { 
  Remainder = Number % 10;  // 1234 % 10 = 4 | 123 % 10 = 3  
  Number /= 10;  // 1234 / 10 = 123 | 123 / 10 = 12 .... 
  Number2 = Number2 * 10 + Remainder;   
// 0 * 10 + 4 = 4 | 4 * 10 + 3 = 43  .... 
 } 
 return Number2;// Number2 = 4321 
} 
void PrintDigits(int Number) 
{ 
 // Number = 4321 
 int Remainder = 0; 
 while (Number > 0) // 4321 > 0 ? | 432 > 0 ? ..... 
 { 
  Remainder = Number % 10;  // 1234 % 10 = 4 | 123 % 10 = 3 
  Number /= 10;  // 4321 / 10 = 432 | 432 / 10 = 43 .... 
  cout << Remainder << endl; // 1 \n 2 \n 3 \n 4 
 } 
} 
 
int main() 
{ 
 PrintDigits(ReverseNumbers(ReadPositiveNumber("Pleas enter a positie Number ?"))); 
}