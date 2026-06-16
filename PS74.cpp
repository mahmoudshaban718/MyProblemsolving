// Print First Letter of Each Word # 
 
 
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
 
void PrintFirstLetterOfEachWord(string S1) 
{ 
 bool isFirstLetter = true; 
 
 cout << "\n First letters of this string : \n"; 
 
 for (int i = 0; i < S1.length(); i++) 
 { 
  if (S1[i] != ' ' && isFirstLetter) 
  { 
   cout << S1[i] << endl; 
  } 
 
  isFirstLetter = (S1[i] == ' ' ? true : false); 
 } 
} 
 
int main() 
{ 
 // Problem #23 
 
 PrintFirstLetterOfEachWord(ReadString()); 
 
 system("pause>0"); 
}