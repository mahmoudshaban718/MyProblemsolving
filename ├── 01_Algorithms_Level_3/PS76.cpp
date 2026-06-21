//Lower First Letter of Each Word # 
 
 
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
 
// Problem #25 
 
string LowerFirstLetterOfEachWord(string S2) 
{ 
 bool isFirstLetter = true; 
 
 for (int i = 0; i < S2.length(); i++) 
 { 
  if (S2[i] != ' ' && isFirstLetter) 
  { 
   S2[i] = tolower(S2[i]); 
  } 
 
  isFirstLetter = (S2[i] == ' ' ? true : false); 
 } 
 return S2; 
} 
 
int main() 
{ 
 // Problem #25 
  
 string S2 = ReadString(); 
  
 cout << "\n String after Conversion : \n"; 
 S2 = LowerFirstLetterOfEachWord(S2); 
 cout << S2 << endl; 
  
 system("pause>0"); 
}