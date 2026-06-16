 //Count Vowel  # 
 
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
 
 return ((Ch4 == 'a') ||(Ch4 == 'e') ||(Ch4 == 'i') ||(Ch4 == 'o') ||(Ch4 == 'u')) ; 
 
 
} 
 
// Problem #33 
 
short CountVowels(string S7) 
{ 
 short Counter = 0; 
 
 for (short i = 0; i < S7.length(); i++) 
 { 
  if (IsVowel(S7[i])) 
  { 
   Counter++; 
  } 
 } 
 return Counter; 
} 
 
int main() 
{ 
 // Problem #33 
  
 string S7 = ReadString(); 
  
 cout << "\nNumber of vowels is: " << CountVowels(S7); 
 
 system("pause>0"); 
} 
  