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
void PrintNumberPattern(int Number) 
{ 
 // Number = 3 
 cout << "\n"; 
 
 for (int i = 1; i <= Number; i++ ) // 1 <= 3 ? | 2 <= 3 ? ... 
 { 
  for (int j = 1; j <= i; j++)  // 1 <= 1 ? | 1 <= 2 ? | 2 <= 2 
 { 
 
   cout << i; // Print ( 1 \n 22 \n 333 ) 
  } 
  cout << endl; 
 } 
} 
int main() 
{ 
 PrintNumberPattern(ReadPositiveNumber("Pleas enter a positie Number ?")); 
}