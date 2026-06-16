 //Is Vowel ?  # 
 
#include <iostream> 
#include <string> 
#include <iomanip> 
 
using namespace std; 
 
// Problem #27 
 
char ReadChar() 
{ 
 char Ch1 ; 
 
 cout << "Pleas Enter a Character ? \n"; 
 cin >> Ch1; 
 
 return Ch1; 
 
} 
 
// Problem #32 
 
bool IsVowel(char Ch4) 
{ 
 Ch4 = tolower(Ch4); 
 
 return ((Ch4 == 'a') ||(Ch4 == 'e') ||(Ch4 == 'i') ||(Ch4 == 'o') ||(Ch4 == 'u')) ; 
 
 
} 
 
int main() 
{ 
 // Problem #32 
 
 char Ch4 = ReadChar(); 
 
 if (IsVowel(Ch4)) 
  cout << "\nYes Letter \'" << Ch4 << "\' is Vowel"; 
 else 
  cout << "\nNo Letter \'" << Ch4 << "\' is NOT Vowel"; 
 
 
 system("pause>0"); 
} 