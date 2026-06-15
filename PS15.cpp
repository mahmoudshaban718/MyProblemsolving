#include <iostream> 
 
using namespace std; 
 
int ReadPositiveNumber(string Message) 
{ 
 int Number; 
  
 do 
 { 
  cout << Message << endl; 
  cin >> Number; // 3 
 
 } while (Number < 0); 
 return Number; 
} 
 
void PrintLetterPattern(int Number) 
{ 
 // Number = 3 ( األسطر أو  األحرف عدد ) 
 cout << "\n"; 
 
 for (int i = 65  ; i <= 65 + Number - 1; i++)  
// 65 <= "67" (65 + 3 - 1) ? || 66 <= "67" (65 + 3 - 1) ? ... 
 {  
  for (int j = 1 ; j <= i - 65 + 1; j++)  // 1 <= "1" (65 - 65 + 1) ? ||  1 <= "2" (66 - 65 + 1) ? ||  2 <= "2" (66 - 65 + 1) ? ... 
  { 
   cout << char(i); // A \n BB \n CCC  
  } 
  cout << endl; 
 } 
} 
 
int main() 
{ 
 PrintLetterPattern(ReadPositiveNumber("Pleas enter a Positive Number ?")); 
} 