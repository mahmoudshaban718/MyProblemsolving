/*
Description: Write a program to guess a 3-Letter Capital password 
using a brute force method.
*/
#include <iostream> 
 
using namespace std; 
 
string ReadPassword( ) 
{ 
 string Password; 
 cout << "Pleas enter a 3-Letter Password (all capital) ? \n"; 
 cin >> Password;  // AAF 
 return Password; 
} 
 
bool GuessPassword(string OriginalPassword) 
{ 
 // OriginalPassword = AAF 
 cout << "\n"; 
 string Word = ""; 
 int Counter = 0; 
 
 for (int i = 65; i <= 90 ; i++) // 65 <= 90 ? | 66 <= 90 ? ..... 
 { 
  for (int j = 65; j <= 90 ; j++)  // 65 <= 90 ? | 66 <= 90 ? 
  
  { 
   for (int k = 65; k <= 90; k++) // 65 <= 90 ? | 66 <= 90 
 
   { 
    Counter++; // المحاوالت عدد 
 
    Word = Word + char(i);  // A ... 
    Word = Word + char(j);  // A | B ... 
    Word = Word + char(k);  // A , B ... | A , B 
 
 
    cout << "Trial [" << Counter << "] : " << Word 
<< endl;  // print ( Trial [1] : AAA |  Trial [2] : AAB ...  
    if (Word == OriginalPassword)  
// AAA == AAF ? | AAB == AAF ? ... 
    { 
     cout << "\nPassword is : " << 
OriginalPassword << endl; // print ( Password is : AAF ) 
     cout << "Found after " << Counter << " Trial(s)\n";  // print ( Found after 6 Trial(s) 
     return true;  // قيمة إرجاع +  التكرار حلقة من اخرج  
     } 
  
    Word = "";  //  ء ال شي "  فارغ "  الى  المتغير إرجاع 
 
   } 
  } 
 } 
 return false; 
} 
 
int main() 
{ 
 GuessPassword(ReadPassword()); 
} 
 