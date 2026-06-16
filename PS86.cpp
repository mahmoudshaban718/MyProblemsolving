//TrimLeft , TrimRight Trim  
 
#include <iostream> 
#include <string> 
#include <iomanip> 
using namespace std; 
 
// Problem #38 
 
string TrimLeft(string S10) 
{ 
 for (short i = 0; i < S10.length(); i++) 
 { 
  if (S10[i] != ' ') 
  { 
   return  S10.substr(i, 
S10.length() - i); 
 
  } 
 } 
 return ""; 
 
} 
 
string TrimRight(string S10) 
{ 
 for (short i = S10.length() - 1; i >= 0; i--) 
 { 
  if (S10[i] != ' ') 
  { 
   return  S10.substr(0, i + 1); 
 
  } 
 } 
 return ""; 
 
} 
 
string Trim(string S10) 
{ 
 return TrimLeft(TrimRight(S10)); 
 
} 
 
 
int main() 
{  
 // Problem #38 
 
string S10 = "     Mohammed Abu-Hadhoud     "; 
 
cout << "\nString      = " << S10; 
cout << "\n\nTrim Left   = " << TrimLeft(S10); 
cout << "\nTrim Right  = " << TrimRight(S10); 
cout << "\nTrim        = " << Trim(S10); 
 
 
 
 system("pause>0"); 
}