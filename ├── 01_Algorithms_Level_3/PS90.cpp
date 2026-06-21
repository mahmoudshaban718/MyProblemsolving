 //Count Letters ( Match Case )  
 
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
 
char ReadChar() 
{ 
 char Ch1 ; 
 
 cout << "Pleas Enter a Character ? \n"; 
 cin >> Ch1; 
 
 return Ch1; 
 
} 
 
char InvertLetterCase(char Char1) 
{   
 return isupper(Char1) ? tolower(Char1) : toupper(Char1); 
} 
 
 
  
 
short CountLetter(string S6 , char Letter , bool MatchCase = true) 
{ 
 short Counter = 0; 
 
 for (short i = 0; i <= S6.length(); i++) 
 { 
  if (MatchCase) 
  { 
   if (S6[i] == Letter) 
    Counter++; 
  } 
  else 
  {   
   if (tolower( S6[i]) == tolower(Letter)) 
    Counter++; 
 
  } 
 } 
 return Counter; 
} 
 
 
int main() 
{ 
 // Problem #31 
  
 string S6 = ReadString(); 
 char Ch3 = ReadChar(); 
 
 cout << "\nLetter \'" << Ch3 << "\' count = " << CountLetter(S6 , Ch3) ; 
 
 cout << "\nLetter \'" << Ch3 << "\'"; 
 cout << "or \'" << InvertLetterCase(Ch3) << "\' "; 
 cout << " Count = " << CountLetter(S6, Ch3, false); 
 
 
 system("pause>0"); 
}