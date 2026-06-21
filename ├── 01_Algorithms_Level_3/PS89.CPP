//Print All Vowels In String  # 
 
#include <iostream> 
#include <string> 
#include <iomanip> 
 
using namespace std; 
 
// Problem #23 
 
string ReadString() 
{ 
 string S1 = " "; 
 
 cout << "Pleas Enter your string ? \n"; 
 getline(cin, S1); 
 
 return S1; 
 
} 
 
// Problem #32 
 
bool IsVowel(char Ch4) 
{ 
 Ch4 = tolower(Ch4); 
 
 return ((Ch4 == 'a') ||(Ch4 == 'e') ||(Ch4 
== 'i') ||(Ch4 == 'o') ||(Ch4 == 'u')) ; 
 
 
} 
 
// Problem #34 
 
void PrintVowels(string S8) 
{ 
 cout << "\nVowels in string are : "; 
 
 for (short i = 0; i < S8.length(); i++) 
 { 
  if (IsVowel(S8[i])) 
  { 
   cout << S8[i] << "   "; 
  } 
 } 
} 
 
int main() 
{ 
 // Problem #34 
  
 string S8 = ReadString(); 
  
 PrintVowels(S8); 
 
 system("pause>0"); 
}