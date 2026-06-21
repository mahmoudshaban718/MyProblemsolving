// Count Letters   
 
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
 
// Problem #30 
 
short CountLetter(string S6 , char Letter) 
{ 
 short Counter = 0; 
 for (short i = 0; i <= S6.length(); i++) 
 { 
  if (S6[i] == Letter) 
   Counter++; 
 } 
 return Counter; 
} 
int main() 
{ 
 // Problem #30 
 
 string S6 = ReadString(); 
 char Ch2 = ReadChar(); 
  
 cout << "\nLetter \'" << Ch2 << "\' count = " << CountLetter(S6, Ch2) << 
endl; 
  
 system("pause>0"); 
}