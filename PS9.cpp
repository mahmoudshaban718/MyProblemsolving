#include <iostream> 
using namespace std; 
 
int ReadPositiveNumber(string Message) 
{ 
 int Number = 0; 
 do 
 { 
  cout << Message << endl; 
  cin >> Number; // 1223222 
 } while (Number <= 0); 
 
 return Number; 
} 
int CountDigitFrequency(int Number, short DigitToCheck) 
{ 
 // Number = 1223222  
 // DigitToCheck = 0 | DigitToCheck = 1 .... 
 int Remainder = 0; 
 short FreqCount = 0; 
 while (Number > 0) // 1223222 > 0 ?  | 122322 > 0 ? ..... 
 { 
  Remainder = Number % 10; 
 // 1223222 % 10 = 2 | 122322 % 10 = 2 .... 
  Number = Number / 10;  
 // (int) 1223222 / 10 = 122322 | 122322 / 10 = 12232 .... 
  if (DigitToCheck == Remainder) // 0 == 2 ? | 1 == 2 ?  | 2 == 2
  { 
   FreqCount++; // 0 + 1 = 1 || 0 + 5 = 5 ... 
  } 
 } 
 return FreqCount;  
 // FreqCount = 0 DigitToCheck = 0 | FreqCount = 1 DigitToCheck = 1 | FreqCount = 5 DigitToCheck = 2 .... 
} 
 
 
 
  
 
void PrintAllDigitsFrequency(int Number) 
{ 
 // Number = 1223222 
 for (int i = 0; i < 10; i++)  // 0 < 10 ? | 1 < 10 ? .... 
 { 
  short DigitFrequency = 0; 
  DigitFrequency = CountDigitFrequency(Number, i);  // CountDigitFrequency ( 1223222 , 0 ) السابق الكود  استخدام  إعادة 
CountDigitFrequency ( 1223222 , 1 )  ;
 
  if (DigitFrequency > 0) // 0 > 0 ? | 1 > 0 ? ....  موجود  الرقم كان  إذا DigitFrequency تكرر  مرة وكم الرقم  اطبع  //  
 
  { 
   cout << "\n  Digit " << i << " Frequency is " 
<< DigitFrequency << " Time(s). \n"; 
  } 
 } 
} 
int main() 
{ 
 int Number = ReadPositiveNumber("Pleas enter the main Number ?"); 
 PrintAllDigitsFrequency(Number); 
 return 0; 
}