#include <iostream> 
using namespace std; 
 
int ReadPositiveNumber(string Message) 
{ 
 int Number = 0; 
 do 
 { 
  cout << Message << endl; 
  cin >> Number;   
 } while (Number <= 0); 
 
 return Number; 
} 
int CountDigitFrequency(int Number, short DigitToCheck) 
{ 
 // Number = 1223222 , DigitToCheck = 2 
 int Remainder = 0; 
 short FreqCount = 0; 
 while (Number > 0) // 1223222 > 0 ?  | 122322 > 0 ? ..... 
 { 
  Remainder = Number % 10;  
// 1223222 % 10 = 2 | 122322 % 10 = 2 .... 
 
  Number = Number / 10;   
// (int) 1223222 / 10 = 122322 | 122322 / 10 = 12232 .... 
 
  if (DigitToCheck == Remainder) // 2 == 2 ? | 2 == 2 ? 
  { 
   FreqCount++; // 0 + 1 = 1 | 1 + 1 = 2 ... 
  } 
 } 
 return FreqCount;  // FreqCount = 5 
} 
int main() 
{ 
 int Number = ReadPositiveNumber("Pleas enter the main Number ?"); 
 // 1223222 
 short DigitToCheck = ReadPositiveNumber("Pleas enter one digit to check  ?");  // 2  استخدام  ReadPositiveNumber مختلفين متغيرين  لقراءة ،   مرة  من أكثر //
 
 
 cout << "\n  Digit " << DigitToCheck << " Frequency is " 
  << CountDigitFrequency(Number, DigitToCheck) << " Time(s). \n"; 
 // Print ( Digit 2 Frequency is 5  Time(s).  
 return 0; 
} 
