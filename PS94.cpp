//Remove Punctuations 
 
#include <iostream> 
#include <string> 
#include <iomanip> 
#include <vector> 
 
using namespace std; 
 
// Problem #44 
 
string RemovePunctuationsFromString(string S14) 
{ 
 string S2 = ""; 
 
 for (short i = 0; i < S14.length(); i++) 
 { 
  if (!ispunct(S14[i])) 
  { 
   S2 += S14[i];  
  } 
 } 
 
 return S2; 
} 
 
int main() 
{ 
 // Problem 44 
  
 string S14 = "Welcome to Jordan , Jordan is a nice country ; it's amazing"; 
  
 cout << "\nOriginal  String\n" << S14; 
 cout << "\n\nPunctuations Removed : \n" << 
RemovePunctuationsFromString(S14); 
  
 system("pause>0"); 
}