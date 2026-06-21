//Invert All Letters Case # 
 
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
 
// Problem #27 
 
char InvertLetterCase(char Char1) 
{   
 return isupper(Char1) ? tolower(Char1) : 
toupper(Char1); 
} 
 
// Problem #28 
 
string InvertAllStringLetterCase(string S1) 
{ 
 for (int i = 0; i < S1.length(); i++) 
 { 
   S1[i] = InvertLetterCase(S1[i]); 
 } 
 return S1; 
} 
 
int main() 
{ 
 // Problem #28 
 
 string S4 = ReadString(); 
 
 cout << "\n String after Invert All String Letter Case : \n"; 
 S4 = InvertAllStringLetterCase(S4); 
 cout << S4 << endl; 
 
 system("pause>0"); 
}