#include <iostream> 
using namespace std; 
 
int ReadPositiveNumber(string Message) 
{ 
 int Number = 0; 
 do 
 { 
  cout << Message << endl; 
  cin >> Number; // 3 
 } while (Number <= 0); 
 
 return Number; 
} 
void PrintInvertedNumberPattern(int Number) 
{ 
 // Number = 3 
 cout << "\n"; 
 
 for (int i = Number; i >= 1; i--) // 3 >= 1 ? | 2 >= 1 ? ... 
 { 
  for (int j = 1; j <= i; j++)   
// 1 <= 3 ? | 2 <= 3 ? ... | 1 <= 2 ? ....   
{ 
 
   cout << i; // Print ( 333 \n 22 \n 1 ) 
  } 
  cout << endl; 
 } 
} 
int main() 
{ 
 PrintInvertedNumberPattern(ReadPositiveNumber("Pleas enter a positie Number ?")); 
}